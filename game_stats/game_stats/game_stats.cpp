// Game Stats
// Declaring and initializing variables

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

/* int main()
{
	int score; // -2147483648 - 2147483647 // unsigned int 0 - 4294967295
	// float: 3.4E +- 38
	double distance; // 1.7E +- 308
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled; // holds integers from -32768 - 32767; unsigned short int 0 - 65535

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	double engineTemp = 6572.89;

	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << " playAgain: " << playAgain << endl;

	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	return 0;
} */

/* int main()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;

	score = score + 100;
	cout << "score: " << score << endl;

	score += 100;
	cout << "score: " << score << endl;

	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;
	
	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;

	lives = 3;
	bonus = lives++ * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;

	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;
	return 0;
} */

int main()
{
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

	enum difficulty { NOVICE, EASY, NORMAL, HARD, UNBEATABLE };
	difficulty myDifficulty = EASY;

	enum shipCost { FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50 };
	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo update my ship to a Cruiser will cost "
		<< (CRUISER_COST - myShipCost) << " Resource Points." << endl;

	return 0;
}