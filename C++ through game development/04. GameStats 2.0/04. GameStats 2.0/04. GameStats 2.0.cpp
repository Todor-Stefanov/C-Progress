#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	typedef unsigned int uint;
	uint score = 5000;
	typedef unsigned short int ushort;
	ushort lives = 3, bonus = 40;
	cout << "score: " << score << endl;

	// altering a value of a variable
	cout << "score: " << score + 100 << endl;

	// combined assignment operator
	score += 100;
	cout << "score: " << score << endl;

	// increment operators:
	// prefix increment operator
	++lives;
	cout << "\n(++lives): " << lives << endl;
	// postfix increment operator
	lives = 3;
	lives++;
	cout << "(lives++): " << lives << endl;

	// Firstly, it increases the lives to 4, and after that completes the operation lives * 10 
	lives = 3;
	bonus = ++lives * 10;
	cout << "\nlives, bonus: " << lives << ", " << bonus << endl;
	// Firstly, it completes the operatiion lives * 10, and after that it increasses lives to 4
	lives = 3;
	bonus = lives++ * 10; // = 30
	cout << "lives, bonus: " << lives << ", " << bonus << endl;

	// Integer wrap around
	score = UINT_MAX;
	cout << "\nMax score: " << score << endl;

	// Increacing the integer beyond its maximum value leads to types minimum value
	// Just like car odometer
	score++;
	cout << "Max score + 1: " << score << endl;

	
	return 0;
}
