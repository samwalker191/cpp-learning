#include <iostream>
#include "Cat.h"

using namespace std;

int main() 
{
	Cat* pCat = new Cat();
	pCat->speak();

	pCat->changeMood(false);
	pCat->speak();
	delete pCat;

	return 0;
}