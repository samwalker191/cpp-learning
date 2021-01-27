// Score Rater
// demonstrates if statements

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

	if (score) {
		cout << "Atleast you didn't score zero.\n\n";
	}

	if (score >= 250)
	{
		cout << "You scored 250 or more. Decent.\n\n";
	}

	if (score >= 500)
	{
		cout << "You scored 500 or more. Nice.\n\n";

		if (score >= 1000)
		{
			cout << "You scored 1000 or more. Impressive.\n\n";
		}
	}

	return 0;
}
