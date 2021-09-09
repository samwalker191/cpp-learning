#include <iostream>

using namespace std;

void manipulate(double* pValue) {
	*pValue = 10.0;

	cout << "Value of double in manipulate: " << *pValue << endl;
}

int main() {
	//int nValue = 8;
	//int* pnValue = &nValue; // pointer to the memory address of nValue
	//
	//cout << "Int value: " << nValue << endl;
	//cout << "Pointer to int address: " << pnValue << endl;

	//cout << "Int value via pointer: " << *pnValue << endl; // dereferences it

	//cout << "===============================" << endl;

	//double dValue = 123.4;
	//cout << "1. dValue: " << dValue << endl;
	//manipulate(&dValue);
	//cout << "2. dValue: " << dValue << endl;

	string texts[] = { "one", "two", "three" };
	string* pTexts = texts;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << *(pTexts + i) << " " << flush;
	}

	cout << "" << endl;
	return 0;
}