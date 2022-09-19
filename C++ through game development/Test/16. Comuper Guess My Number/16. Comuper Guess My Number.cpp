#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int number;
	cout << "Enter a number from 1 to 100: ";
	cin >> number;
	

	int counter = 1;
	while (true){
		srand(static_cast<unsigned int>(time(0)));
		int randomNumber = rand() % 100 + 1;
		if (randomNumber == number) {
			cout << "Congrats, Computer. You got it in " << counter << " guesses.";
			break;
		}
		else {
			counter++;
		}
	} 

	return 0;
}
