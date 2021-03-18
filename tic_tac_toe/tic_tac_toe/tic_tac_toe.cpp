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
char winner(const vector< vector<char> >& board);
bool isLegal(const vector< vector<char> >& board, int move);
int humanMove(const vector< vector<char> >& board, char human);
int computerMove(const vector< vector<char> >& board, char computer);
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
	cout << human;
	cout << computer;
	
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
