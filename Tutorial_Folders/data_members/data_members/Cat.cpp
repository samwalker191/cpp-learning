#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created..." << endl;
	happy = true;
	name = "Bob";
}

Cat::~Cat() {
	cout << "Cat destroyed..." << endl;
}

void Cat::speak()
{
	if (happy) {
		cout << "Meow, I am " << name << endl;
	}
	else {
		cout << "Rawr, I am " << name << endl;
	}
}

void Cat::changeMood(bool mood)
{
	happy = mood;
}

string Cat::toString() {
	return "The cat is named " + name;
}