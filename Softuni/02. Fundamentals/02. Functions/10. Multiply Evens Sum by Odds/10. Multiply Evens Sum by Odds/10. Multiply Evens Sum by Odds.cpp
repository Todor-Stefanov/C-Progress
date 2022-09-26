/* Create a program that reads an integer number 
and multiplies the sum of all its even digits 
by the sum of all its odd digits. */

#include <iostream>
using namespace std;

int evensOddsProduct(int n) {
	if (n < 0) {
		n *= -1;
	}

	int evenSum = 0, oddSum = 0;

	while (n) {
		int currentNumb;
		currentNumb = n % 10;
		if (currentNumb % 2 == 0) {
			evenSum += currentNumb;
		}
		else {
			oddSum += currentNumb;
		}
		n = n / 10;
	}
	int product = evenSum * oddSum;
	return product;
}
int main()
{
	int number;
	cin >> number;


	cout << evensOddsProduct(number);

	return 0;
}