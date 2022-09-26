/* Write a program that calculates the greatest common divisor(GCD) of given two numbers.*/

#include <iostream>
using namespace std;
int main()
{
    int a, b, smallestNumber, GCD;
    cin >> a >> b;
    if (a < b) {
        smallestNumber = a;
    }
    else {
        smallestNumber = b;
    }
    for (int i = 1; i <= smallestNumber; i++) {
        if (a % i == 0 && b % i == 0) {
            GCD = i;
        }
    }
    cout << GCD << endl;

    return 0;
}

