#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 


int main()
{
	
	cout << "\tWelcome to Guess My Number" << endl;

	srand(static_cast<unsigned int>(time(0)));

	int randomNumber = rand() % 100 + 1 ;
	cout << randomNumber << endl;
	int guess, numberOfGuesses = 0;
	bool correctGuess = false;

	do {
		cout << "\nEnter a guess: ";
		cin >> guess;
		numberOfGuesses++;
		if (guess > randomNumber) {
			cout << "Too high!" << endl;
		}
		else if (guess < randomNumber) {
			cout << "Too low!" << endl;
		}
		else {
			correctGuess = true;
			cout << "\nThat's it you got it in " << numberOfGuesses << " guesses!" << endl;
		}

	} while (!correctGuess);

	return 0;
}