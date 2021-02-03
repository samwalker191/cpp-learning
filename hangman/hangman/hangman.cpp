// Hangman
// The game

// Plan

// Setup!
// Create group of words
// Pick random word from the group as a secret word

// Loop
// While player hasnt made too many incorrect guesses and hasnt guessed the secret word
	// Tell them how many incorrect guesses they have left
	// Show the letters they have guessed
	// Show the progress made on the secret word
	// Get players next guess
	// While player has entered a guess they have already made
		// get another guess
	// Add guess to group of used letters
	// If guess is in the secret word
		// Tell player it is a correct guess
		// Update the word guessed so far with the new letter
	// else
		// Tell player guess is incorrect
		// Increment number of incorrect guesses made

// After loop
// If player has made too many incorrect guesses
	// Tell the player they have lost
// else
	// Congratulate player for winning!

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype> // used to convert characters to uppercase, etc

using namespace std;
int main()
{
	// setup
	const int MAX_WRONG = 8;
	const int NUM_WORDS = 5;
	vector<string> words;
	words.push_back("BANANA");
	words.push_back("DIFFICULT");
	words.push_back("SPAGHETTI");
	words.push_back("SUPERDUPER");
	words.push_back("ENDOCRINE");

	srand(static_cast<unsigned int>(time(0)));
	int choice = (rand() % NUM_WORDS);
	const string SECRET_WORD = words[choice];\

	int wrong = 0;
	string soFar(SECRET_WORD.size(), '_');
	string used = "";

	std::cout << "Welcome to Hangman. Good luck!\n";

	while ((wrong < MAX_WRONG) && (soFar != SECRET_WORD))
	{
		system("CLS");
		cout << "You have " << (MAX_WRONG - wrong) << " remaining guesses.\n\n";
		cout << "You have used the following letters:\n";
		for (int i = 0; i < used.length(); i++)
		{
			cout << used[i] << " ";
		}
		cout << "\n\n";

		cout << "So far, the word is: \n";
		cout << soFar << "\n\n";

		cout << "Please enter your guess: \n";
		char guess;
		cin >> guess;
		guess = toupper(guess);

		while (used.find(guess) != string::npos)
		{
			cout << "You have already guessed that letter. Please enter another guess: \n";
			cin >> guess;
			guess = toupper(guess);
		}

		used += guess;

		if (SECRET_WORD.find(guess) != string::npos)
		{
			cout << "That is a correct guess!\n";
			for (int i = 0; i < SECRET_WORD.length(); i++)
			{
				if (SECRET_WORD[i] == guess)
				{
					soFar[i] = guess;
				}
			}
		}
		else
		{
			cout << "That is not a correct guess!\n";
			wrong++;
		}
	}

	if (wrong >= MAX_WRONG)
	{
		cout << "\nSorry! You have made too many incorrect guesses.\n";
	}
	else {
		cout << "\nCongrats! You guessed the word!\n";
	}

	return 0;
}
