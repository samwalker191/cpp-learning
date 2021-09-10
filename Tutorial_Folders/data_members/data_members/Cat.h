#pragma once
#include <string>

using namespace std;

class Cat
{
private:
	bool happy;
	string name;

public:
	Cat(); // constructor
	~Cat(); // destructor
	Cat(const Cat& other) : happy(other.happy), name(other.name) { cout << "Cat copied" << endl; };
	void speak();
	void changeMood(bool mood);
	void setName(string name);
	string toString();
};

