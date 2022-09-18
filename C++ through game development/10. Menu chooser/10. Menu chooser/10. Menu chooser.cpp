#include <iostream>
using std::cout;
using std::cin;
int main()
{
	cout << "Difficulty Levels\n\n";

	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n";

	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch(choice) {
	case 1: 
		cout << "\nYou picked Easy\n\n";
		break;
	case 2:
		cout << "\nYou picked Normal\n\n";
		break;
	case 3:
		cout << "\nYou picked Hard\n\n";
		break;
	default:
		cout << "\nYou made an illegal choice\n\n";
		
	}

	return 0;
}
