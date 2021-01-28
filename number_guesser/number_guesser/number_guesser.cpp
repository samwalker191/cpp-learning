// Number Guesser
// A game about guessing a number

#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	srand(static_cast<unsigned int>(time(0))); // seed random number generator with todays time/date

	int secretNumber = rand() % 100 + 1; // get random number between 1 - 100
	int tries = 0;
	int guess;

	cout << "Welcome to Number Guesser\n\n";

	do
	{
		
		cout << "Please guess a number between 1 and 100: ";
		cin >> guess;

		tries++;

		if (guess > secretNumber)
		{
			cout << "That number is too large!\n\n";
		} 
		else if (guess < secretNumber)
		{
			cout << "That number is too small!\n\n";
		} 
	} while (guess != secretNumber);

	cout << "Nice! You guessed my number in " << tries << " tries.\n\n";

	return 0;
}