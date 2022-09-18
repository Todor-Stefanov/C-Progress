#include <iostream>
using namespace std;

int main()
{
	// Using constants via keyword const. The name of the constant by convention should be 
	// in all CAPS
	/* Why use constants :
			1. Make program clearer
			2. Make changes easy */

	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = ALIEN_POINTS * aliensKilled;

	cout << "score: " << score << endl;

	/* ENUMORATION is a SET of UNSIGNED INT constants.
	   By defauld the value begins from zero and increases by one.*/
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UBEATABLE}; // NOVICE = 0, EASY = 1, NORMAL = 2, ...
	difficulty Mydifficulty = EASY; // Mydifficylty = 1

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50}; // BOMBER_COST = 26
	shipCost myShipCost = BOMBER_COST; // = 26;

	cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resourse Points.\n";

	return 0;
}