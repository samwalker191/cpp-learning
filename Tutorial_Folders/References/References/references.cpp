#include <iostream>

using namespace std;

void changeSomething(double& value) {
	value = 123.4;
}

int main() {
	int value1 = 8;
	int& rValue = value1; // reference
	rValue = 10;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << rValue << endl;

	double value = 4.321;
	changeSomething(value);
	cout << value << endl;

	return 0;
}