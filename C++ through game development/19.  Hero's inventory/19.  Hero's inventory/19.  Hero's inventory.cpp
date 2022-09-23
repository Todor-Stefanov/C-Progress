#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int MAX_ITEMS = 10;
	string inventory[MAX_ITEMS];

	int itemNum = 0;
	inventory[itemNum++] = "sword"; // first it adds the string to the array at position 0 and then increments 'index' so that the next
	inventory[itemNum++] = "armor"; // item will be added at position 1, and so on ...
	inventory[itemNum++] = "shield"; 

	cout << "The items in your inventory are: " << endl;
	for (int i = 0; i < itemNum; i++) {
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe." << endl;
	inventory[0] = "battle axe";
	cout << "Now you have the following items in your inventory" << endl;
	for (int i = 0; i < itemNum; i++) {
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has " << inventory[0].size() << " letters in it." << endl;

	cout << "\nYou find a healing potion." << endl;
	if (itemNum < MAX_ITEMS) {
		inventory[itemNum++] = "healing potion";
		cout << "You added the healing potion to your inventory." << endl;
	}
	else {
		cout << "Your inventory is full!" << endl;
	}
	cout << "Your items now are:" << endl;
	for (int i = 0; i < itemNum; i++) {
		cout << inventory[i] << endl;
	}

	return 0;
}