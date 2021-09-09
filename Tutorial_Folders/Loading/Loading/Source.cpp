#include <iostream>

using namespace std;

int main() {
	cout << "Begin loading..." << endl;

	string progressBar = "[..........]";
	int milestoneMarker = 10000 / 10;
	int currentMilestone = 0;
	cout << progressBar << endl;

	for (int i = 0; i <= 10000; i++)
	{
		if (i > 0) {
			if (i % milestoneMarker == 0) {
				progressBar.replace(currentMilestone+1, 1, "X");
				cout << progressBar << endl;
				currentMilestone++;
			}
		}
	}
		
	cout << "Done loading..." << endl;
	return 0;
}