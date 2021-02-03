// Yes or no!
// show off some methods

#include <iostream>
#include <string>

using namespace std;

char askYesNo1();
char askYesNo2(string question);

int main()
{
	char answer1 = askYesNo1();
	cout << "Thanks for answering: " << answer1 << "\n\n";

	char answer2 = askYesNo2("Do you wish to save your game?");
	cout << "Thanks for answering: " << answer2 << "\n\n";

	return 0;
}

char askYesNo1()
{
	char response1 = 'c';
	while (response1 != 'y' && response1 != 'n')
	{
		cout << "Please enter 'y' or 'n': \n";
		cin >> response1;
	}

	return response1;
}

char askYesNo2(string question)
{
	char response2 = 'c';
	while (response2 != 'y' && response2 != 'n')
	{
		cout << question << " (y/n): ";
		cin >> response2;
	}

	return response2;
}