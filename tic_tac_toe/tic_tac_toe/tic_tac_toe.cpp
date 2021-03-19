// Tic Tac Toe
// Console game

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// global constants
const char X = 'X';
const char O = 'O';
const char TIE = 'T';
const char NO_ONE = 'N';
const char EMPTY = ' ';

void instructions();
char askYesNo(string question);
int askNumber(string question, int high = 8, int low = 0);
char humanPiece();
char opponent(char piece);
void displayBoard(const vector< vector<char> >& board);
char horizontalWin(const vector< vector<char> >& board);
char verticalWin(const vector< vector<char> >& board);
char diagonalWin(const vector< vector<char> >& board);
bool isOver(const vector< vector<char> >& board);
char winner(const vector< vector<char> >& board);
bool isLegal(const vector< vector<char> >& board, int move);
void placeMark(vector <vector<char> >& board, int move, char player);
int humanMove(const vector< vector<char> >& board);
int computerMove(vector< vector<char> > board, char computer);
void announceWinner(char winner, char computer, char human);

int main() 
{
	vector< vector<char> > board{
		{ EMPTY, EMPTY, EMPTY },
		{ EMPTY, EMPTY, EMPTY },
		{ EMPTY, EMPTY, EMPTY }
	};

	instructions();

	char human = humanPiece();
	char computer = opponent(human);
	char currentPlayer;

	if (human == X)
	{
		currentPlayer = human;
	}
	else
	{
		currentPlayer = computer;
	}

	while (winner(board) == NO_ONE)
	{
		displayBoard(board);
		if (currentPlayer == human)
		{
			int move = humanMove(board);
			placeMark(board, move, human);
			currentPlayer = opponent(human);
		}
		else {
			int move = computerMove(board, computer);
			placeMark(board, move, computer);
			currentPlayer = opponent(computer);
		}
	}
	
	displayBoard(board);
	announceWinner(winner(board), computer, human);

	return 0;
}

void instructions()
{
	cout << "Welcome to the ultimate man-machine showdown: Tic-Tac_Toe.\n";
	cout << "--where human brain is put against silicon processor\n\n";
	
	cout << "Make your move known by entering a number, 0-8. The number\n";
	cout << "corresponds to the desired board position, as illustrated:\n\n";

	cout << " 0 | 1 | 2\n";
	cout << " ---------\n";
	cout << " 3 | 4 | 5\n";
	cout << " ---------\n";
	cout << " 6 | 7 | 8\n\n";

	cout << "Prepare yourself, human. The battle is about to begin.\n\n";
}

char humanPiece()
{
	char piece;
	char response = askYesNo("Would you like to go first? (y/n)");
	if (response == 'y') {
		piece = X;
	}
	else {
		piece = O;
	}
	return piece;
}

char askYesNo(string question)
{
	char response;

	cout << question << "\n";
	cin >> response;
	
	return response;
}

char opponent(char piece)
{
	char opponent;

	if (piece == X)
	{
		opponent = O;
	}
	else 
	{
		opponent = X;
	}

	return opponent;
}

int askNumber(string question, int high, int low)
{
	int number;

	do
	{
		cout << question << "(" << low << "-" << high << ")\n";
		cin >> number;
	} while (number < low || number > high);

	return number;
}

void displayBoard(const vector< vector<char> >& board)
{
	system("cls");
	cout << "\n";
	for (size_t i = 0; i < 3; i++)
	{
		cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " \n";

		if (i < 2) 
		{
			cout << " ---------\n";
		}
	}
}

char horizontalWin(const vector< vector<char> >& board)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
		{
			if (board[i][0] != EMPTY)
			{
				return board[i][0];
			}
		}
	}
	return NO_ONE;
}

char verticalWin(const vector< vector<char> >& board)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
		{
			if (board[0][i] != EMPTY)
			{
				return board[0][i];
			}
		}
	}
	return NO_ONE;
}

char diagonalWin(const vector< vector<char> >& board)
{
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
	{
		if (board[0][0] != EMPTY)
		{
			return board[0][0];
		}
	}

	if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
	{
		if (board[0][2] != EMPTY)
		{
			return board[0][2];
		}
	}

	return NO_ONE;
}

bool isOver(const vector< vector<char> >& board)
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			if (board[i][j] == EMPTY)
			{
				return false;
			}
		}
	}

	return true;
}

char winner(const vector< vector<char> >& board)
{
	if (horizontalWin(board) != NO_ONE)
	{
		return horizontalWin(board);
	}

	if (verticalWin(board) != NO_ONE)
	{
		return verticalWin(board);
	}

	if (diagonalWin(board) != NO_ONE)
	{
		return diagonalWin(board);
	}

	if (isOver(board))
	{
		return TIE;
	}
	else
	{
		return NO_ONE;
	}
}

bool isLegal(const vector< vector<char> >& board, int move)
{
	int x = move / 3;
	int y = move % 3;
	
	if (board[x][y] != EMPTY)
	{
		return false;
	}

	return true;
}

void placeMark(vector <vector<char> >& board, int move, char player)
{
	int x = move / 3;
	int y = move % 3;
	board[x][y] = player;
}

int humanMove(const vector< vector<char> >& board)
{
	int move;
	do
	{
		move = askNumber("Please enter a number between", 8, 0);
	} while (!isLegal(board, move));

	return move;
}

int computerMove(vector< vector<char> > board, char computer)
{
	char human = opponent(computer);
	for (size_t i = 0; i < 9; i++)
	{
		if (isLegal(board, i))
		{
			
			placeMark(board, i, computer);
			if (winner(board) == computer)
			{
				return i;
			}
			placeMark(board, i, EMPTY);
		}
	}

	for (size_t i = 0; i < 9; i++)
	{
		if (isLegal(board, i))
		{

			placeMark(board, i, human);
			if (winner(board) == human)
			{
				return i;
			}
			placeMark(board, i, EMPTY);
		}
	}

	const int BEST_MOVES[9] = { 4, 0, 2, 6, 8, 1, 3, 5, 7 };
	for (size_t i = 0; i < 9; i++)
	{
		if (isLegal(board, BEST_MOVES[i]))
		{
			return BEST_MOVES[i];
		}
	}
}

void announceWinner(char winner, char computer, char human)
{
	if (winner == computer)
	{
		cout << winner << "'s won!\n";
		cout << "As I predicted, human, I am triumphant once more -- proof\n";
		cout << "that computers are superior to humans in all regards.\n";
	}
	else if (winner == human)
	{
		cout << winner << "'s won!\n";
		cout << "No, no! It cannot be! Somehow you tricked me, human.\n";
		cout << "But never again! I, the computer, so swear it!\n";
	}
	else
	{
		cout << "It's a tie.\n";
		cout << "You were most lucky, human, and somehow managed to tie me.\n";
		cout << "Celebrate... for this is the best you will ever achieve.\n";
	}
}