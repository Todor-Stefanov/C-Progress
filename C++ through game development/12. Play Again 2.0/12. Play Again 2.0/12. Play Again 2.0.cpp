#include <iostream>
using namespace std;

int main()
{
	char again;

	do {
		cout << "\n**Played an exciting game**\n";
		cout << "Do you want to play again? (y/n): ";
		cin >> again;

	} while (again == 'y');

	cout << "\nOkay, bye!\n";

	return 0;
}


