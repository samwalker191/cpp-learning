#include <iostream>
#include "Person.h"

using namespace std;

int main() {
	Person person("Bob", 58);

	cout << person.toString() << endl;
	return 0;
}