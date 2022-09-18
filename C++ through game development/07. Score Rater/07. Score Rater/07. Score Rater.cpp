#include <iostream>
using namespace std;


int main()
{

	int score = 1000;

	// Testing true and false
	if (true) {
		cout << "This is always displayed!\n" << endl;
	}
	if (false) {
		cout << "This is never displayed!\n" << endl;
	}

	// Interpreting a value as true or false
	if (score) {
		cout << "At least you didn't score a zero.\n\n";
	}

	// Using relational operations
	if (score >= 250) {
		cout << "You scored 250 or more. Decent.\n\n";
	}

	if (score >= 500) {
		cout << "You scored 500 or more. Nice.\n\n";
		if (score >= 1000) {
			cout << "You scored 1000 or more. Impressive!\n\n";
		}
	}

	return 0;
}

