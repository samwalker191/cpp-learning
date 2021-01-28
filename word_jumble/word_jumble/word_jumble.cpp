// Word Jumble
// A game about guessing a mixed up word

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	enum fields {WORD, HINT, NUM_FIELDS};
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS][NUM_FIELDS] =
	{
		{"wall", "Bang your head against it"},
		{"glasses", "Gotta see with them"},
		{"labored", "Going slowly"},
		{"persistant", "Keep at it"},
		{"jumble", "It's the game"}
	};

	// pick random word
	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	string theWord = WORDS[choice][WORD];
	string theHint = WORDS[choice][HINT];

	// jumble the word
	string jumble = theWord;
	int length = jumble.size();
	for (int i = 0; i < length; i++)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);

		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	// welcome the player

	cout << "\t\tWelcome to Word Jumble!\n\n";
	cout << "Unscramble to letters to make a word.\n";
	cout << "Enter 'hint' for a hint: \n";
	cout << "Enter 'quit' to quit the game.\n\n";
	cout << "The jumble is " << jumble << endl;

	string guess;
	cout << "\n\nYour guess: ";
	cin >> guess;

	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
			cout << "Here is your hint!\n";
			cout << theHint;
		}
		else
		{
			cout << "Sorry, that is not the correct word.\n";
		}

		cout << "\nYour guess: ";
		cin >> guess;
	}

	if (guess == theWord)
	{
		cout << "That's it! Nice job!\n";
	}

	cout << "Thanks for playing!\n";

	return 0;
}