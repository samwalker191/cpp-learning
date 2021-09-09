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
	void speak();
	void changeMood(bool mood);
	string toString();
};

