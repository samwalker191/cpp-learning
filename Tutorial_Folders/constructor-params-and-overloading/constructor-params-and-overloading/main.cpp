#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	Person person("Bob", 58);

	Person person2 = person;

	cout << person.toString() << endl;
	cout << person2.toString() << endl;
	return 0;
}