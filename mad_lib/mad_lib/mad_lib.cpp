// Mad Lib
// Creates story based on user input

#include <iostream>
#include <string>

using namespace std;

// create two functions to take user input
// one to return strings
// one to return int
// create function to take in args to build story
// inside of main()
	// call functions to gather user input
	// pass results to story function

string askText(string prompt);
int askNumber(string prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main() 
{
	cout << "Welcome to Madlib.\n\n";
	cout << "Please answer the following questions to build your story.\n\n";

	string name = askText("Please enter a name: ");
	string noun = askText("Please enter a noun: ");
	int number = askNumber("Please enter a number: ");
	string bodyPart = askText("Please enter a body part: ");
	string verb = askText("Please enter a verb: ");

	tellStory(name, noun, number, bodyPart, verb);

	return 0;
}

string askText(string prompt)
{
	string text;
	cout << prompt;
	cin >> text;
	return text;
}

int askNumber(string prompt)
{
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
	cout << "\nHere's your story:\n";
	cout << "The famous explorer ";
	cout << name;
	cout << " had nearly given up a life-long quest to find\n";
	cout << "The Lost City of ";
	cout << noun;
	cout << " when one day, the ";
	cout << noun;
	cout << " found the explorer.\n";
	cout << "Surrounded by ";
	cout << number;
	cout << " " << noun;
	cout << ", a tear came to ";
	cout << name << "'s ";
	cout << bodyPart << ".\n";
	cout << "After all this time, the quest was finally over. ";
	cout << "And then, the ";
	cout << noun << "\n";
	cout << "promptly devoured ";
	cout << name << ". ";
	cout << "The moral of the story? Be careful what you ";
	cout << verb;
	cout << " for.";
}
