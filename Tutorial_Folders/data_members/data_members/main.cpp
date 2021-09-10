#include <iostream>
#include "Cat.h"

using namespace std;

Cat* createCat() {
	Cat* pCat = new Cat();
	return pCat;
}

int main() 
{
	Cat* pCat = new Cat[26];
	char c = 'a';

	for (int i = 0; i < 26; i++, c++)
	{
		string name(1, c);
		(pCat + i)->setName(name);
		(pCat + i)->speak();
	}


	delete [] pCat;


	/*Cat* pCat = createCat();
	pCat->speak();
	delete pCat;*/

	return 0;
}