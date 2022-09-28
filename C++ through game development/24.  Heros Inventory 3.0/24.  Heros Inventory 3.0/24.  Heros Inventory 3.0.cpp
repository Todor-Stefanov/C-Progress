#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	vector<string> inventory;
	inventory.push_back("Sword");
	inventory.push_back("Armor");
	inventory.push_back("Shield");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "Your items are: " << endl;
	for (iter = inventory.begin(); iter != inventory.end(); iter++) {
		cout << *iter << endl;
	}

	cout << "\nYou trade your Sword for a Battle axe." << endl;
	myIterator = inventory.begin();
	*myIterator = "Battle axe";
	cout << "Your items are:" << endl;
	for (iter = inventory.begin(); iter != inventory.end(); iter++) {
		cout << *iter << endl;
	}

	cout << "\nThe item name 'Battle axe' has " << (*myIterator).size() << " letters in it." << endl;
	cout << "\nThe item name 'Battle axe' has " << myIterator->size() << " letters in it." << endl;

	cout << "\nYou recovered a Crossbow from a slain enemy." << endl;
	inventory.insert(inventory.begin(), "Crossbow");
	cout << "Your items are:" << endl;
	for (iter = inventory.begin(); iter != inventory.end(); iter++) {
		cout << *iter << endl;
	}
	
	cout << "\nYour Armor was destroyed sin a fierce battle." << endl;
	inventory.erase(inventory.begin() + 2);
	cout << "Your items are: " << endl;
	for (iter = inventory.begin(); iter != inventory.end(); iter++) {
		cout << *iter << endl;
	}

	return 0;
}