#include <iostream>
using namespace std;

int main()
{
	cout << "Counting forward:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
	}

	cout << "\n\nCounting backward:" << endl;
	for (int i = 9; i >= 0; i--) {
		cout << i << " ";
	}

	cout << "\n\nCounting by fives:" << endl;
	for (int i = 0; i <= 50; i += 5) {
		cout << i << " ";
	}

	cout << "\n\nCounting with null initialization and null action" << endl;
	int count = 0;
	for (; count < 10;) {
		cout << count << " ";
		count++;
	}

	cout << "\n\nCounting with nested for loops:" << endl;
	int rows = 5;
	int columns = 3;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << i << "," << j << " ";
		}
		cout << endl;
	}
	cout << endl;


	return 0;
}