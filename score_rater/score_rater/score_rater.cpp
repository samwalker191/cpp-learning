// Score Rater
// demonstrates if, else statements

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	if (true)
	{
		cout << "This is always displayed.\n\n";
	}

	if (false)
	{
		cout << "This is never displayed.\n\n";
	}

	int score;
	cout << "Please enter a number: ";
	cin >> score;

	if (score >= 1000) {
		cout << "You scored at least 1000. Impressive!\n";
	}
	else if (score >= 500)
	{
		cout << "You scored 500 or more. Nice.\n";
	}
	else if (score >= 250)
	{
		cout << "You scored 250 or more. Decent.\n";
	}
	else
	{
		cout << "You scored less than 250. Nothing to brag about.\n";
	}

	return 0;
}
