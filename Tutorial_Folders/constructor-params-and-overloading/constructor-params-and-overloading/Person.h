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
	Person(string name, int age);
	Person(const Person& other): name(other.name), age(other.age) { cout << "Person created by copying" << endl; }; // copy constructor
	string toString();
};

