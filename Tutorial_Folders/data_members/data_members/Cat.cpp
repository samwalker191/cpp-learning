#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak()
{
	if (happy) {
		cout << "Meow" << endl;
	}
	else {
		cout << "Rawr" << endl;
	}
}

void Cat::changeMood(bool mood)
{
	happy = mood;
}