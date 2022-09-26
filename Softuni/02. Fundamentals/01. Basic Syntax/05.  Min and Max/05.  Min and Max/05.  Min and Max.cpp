/* Write a program that reads an integer number N, 
then reads a line of N integers, 
and prints the minimum and maximum of those integers. */

#include <iostream>
using namespace std;
int main()
{
    int n, min = INT32_MAX, max = INT32_MIN;
    cin >> n;
    int currentNum;

    for (int i = 1; i <= n; i++) {
        cin >> currentNum;
        if (currentNum < min) {
            min = currentNum;
        }
        if (currentNum > max) {
            max = currentNum;
        }

    }
    cout << min << " " << max;
    return 0;
}
