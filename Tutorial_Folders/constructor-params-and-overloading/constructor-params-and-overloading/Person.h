#pragma once
#include <string>

using namespace std;

class Person {
private:
	string name;
	int age;

public:
	Person();
	Person(string newName) { name = newName; age = 0; };
	Person(string newName, int newAge) { name = newName; age = newAge; };
	string toString();
};

