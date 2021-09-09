#pragma once
class Cat
{
private:
	bool happy;

public:
	Cat(); // constructor
	~Cat(); // destructor
	void speak();
	void changeMood(bool mood);
};

