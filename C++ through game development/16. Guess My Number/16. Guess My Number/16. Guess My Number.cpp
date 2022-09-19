#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std; 


int main()
{
	
	cout << "\tWelcome to Guess My Number" << endl;
	// 1. Setting up the game - Picking a Random Number
	srand(static_cast<unsigned int>(time(0)));

	int randomNumber = rand() % 100 + 1 ;
	cout << randomNumber << endl;
	int guess, numberOfGuesses = 0;
	bool correctGuess = false;

	do {
		// 2. Getting player's input - Get the player's guess
		cout << "\nEnter a guess: ";
		cin >> guess;
		// 3. Update game internals - Increment number of tries
		numberOfGuesses++;
		
		// 4. Update the display - Telling the player if the guess is too high or too low
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
	// 5. Game over? - Did the player guess the number? If not go back to player's input, else End the program
	} while (!correctGuess);

	return 0;
}
