#include <sstream>
#include "Person.h"

Person::Person() {
	name = "unnamed";
	age = 0;
}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}