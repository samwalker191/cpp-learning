#include <iostream>
#include "Cat.h"

using namespace std;

int main() 
{
	Cat cat;
	cat.speak();

	cout << cat.toString() << endl;

	cat.changeMood(false);
	cat.speak();

	return 0;
}