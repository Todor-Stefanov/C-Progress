/* Write a function to print the smallest of three integer numbers. 
Use an appropriate name for the function. */

#include <iostream>
int smallest(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;

}
int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << smallest(a, smallest(b, c));

}

