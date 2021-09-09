#include <sstream>
#include <iostream>
#include "Person.h"

Person::Person() {
	name = "unnamed";
	age = 0;
}

Person::Person(string name, int age) {
	this->name = name;
	this->age = age;

	Person* memory = this;
	cout << memory->toString() << endl;
}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}