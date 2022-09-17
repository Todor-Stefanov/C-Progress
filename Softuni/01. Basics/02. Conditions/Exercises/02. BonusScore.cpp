#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	double bonus = 0.0;
	if (num <= 100) {
		bonus = 5;
	}

	else if (num > 1000) {
		bonus = 0.1 * num;

	}

	else {
		bonus = 0.2 * num;

	}

	if (num % 2 == 0) {
		bonus += 1;

	}

	else if (num % 10 == 5) {
		bonus += 2;

	}

	cout << bonus << endl;
	cout << num + bonus << endl;

	return 0;
}
