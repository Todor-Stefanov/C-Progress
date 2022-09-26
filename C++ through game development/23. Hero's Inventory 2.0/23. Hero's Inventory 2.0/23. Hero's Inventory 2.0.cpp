#include <iostream>
#include <string>
#include <vector>

using namespace std; 

int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "You have " << inventory.size() << " items in your inventory." << endl;

	cout << "\nYour items are:" << endl;
	for (int unsigned i = 0; i < inventory.size(); ++i) {
		cout << inventory[i] << endl;
	}
	cout << "\nYou trade your sword for a battle axe." << endl;
	inventory[0] = "battle axe";
	cout << "Your items are: " << endl;
	for (int unsigned i = 0; i < inventory.size(); i++) {
		cout << inventory[i] << endl;
	}
	cout << "\nThe item named " << inventory[0] << " has " << inventory[0].size() << " letters in it." << endl;
	
	cout << "\nYour shield is destoyed in a firce battle." << endl;
	inventory.pop_back();
	cout << "Your items are: " << endl;
	for (unsigned int i = 0; i < inventory.size(); i++){
		cout << inventory[i] << endl;
	}

	cout << "\nYou were robbed by a thief." << endl;
	inventory.clear();
	if (inventory.empty()) {
		cout << "You have nothing. " << endl;
	}
	else {
		cout << "You have at least one item." << endl;
	}


	return 0;
}