#include <iostream>
using namespace std;

int main()
{
	int number = 0;

	while (true) {
		number++;
		if (number == 5) {
			continue;
		}
		if (number > 10) {
			break;
		}
		cout << number << endl;
	}

	return 0;
}

