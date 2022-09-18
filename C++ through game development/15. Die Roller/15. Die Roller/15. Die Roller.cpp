#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0))); // Seed random number generator. Every time the random generator 
	//will generate a sequence starting from different number each time

	int randomNumber = rand();
	int die = (randomNumber % 6) + 1; // gives a number in range from 1 to 6

	cout << "You rolled a " << die << endl;

	return 0;
}
