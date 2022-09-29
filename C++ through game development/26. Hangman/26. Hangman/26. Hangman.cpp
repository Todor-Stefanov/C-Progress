#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
	vector<string>::const_iterator iter;

	vector<string> words;
	words.push_back("HANGMAN");
	words.push_back("APLLE");
	words.push_back("IMPECABLE");

	int const MAX_TRIES = 8;

	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());

	const string WORD = words[0];
	int wrong = 0;
	string soFar(WORD.size(), '-');
	string used = "";
	cout << "Welcome to Hangman. Good luck!" << endl;
	
	while (wrong < MAX_TRIES && soFar != WORD) {
		cout << "You have " << (MAX_TRIES - wrong);
		cout << " incorrect guesses left." << endl;
		cout << "\nYou've used the following letters: " << endl << used << endl;
		cout << "\nSo far the word is: " << soFar << endl;

		char guess;
		cout << "\n\nEnter your guess: ";
		cin >> guess;
		guess = toupper(guess);

		while (used.find(guess) != string::npos) {
			cout << "\nYou've already guessed " << guess << endl;
			cout << "Enter your guess: ";
			cin >> guess;
			guess = toupper(guess);

		}
		if (WORD.find(guess) != string::npos) {
			cout << "That's right! " << guess << "is in the word.\n";
			for (int i = 0; i < WORD.length(); i++) {
				if (WORD[i] == guess) {
					soFar[i] = guess;
				}
			}
		}
		else {
			cout << "Sorry, " << guess << " isn't in the word.\n";
			++wrong;
		}
	}

	if (wrong == MAX_TRIES) {
		cout << "You've been hanged!" << endl;

	}
	else {
		cout << "You guessed it!";
	}
	cout << "The word was " << WORD << endl;

	return 0;
}

