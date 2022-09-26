/* Create a function that calculates and returns the value of a number raised to a given power: */

#include <iostream>
void pow(int a, int b) {
    int powA = a;
    if (b == 0) {
        powA = 1;
    }
    else {
        for (int i = 1; i < b; i++) {
            powA *= a;
        }
    }
    std::cout << powA;
}
int main()
{
    int x;
    int y;
    std::cin >> x >> y;
    pow(x, y);
    return 0;
}
