/* Create a function that prints the sign of an integer number n: */

#include <iostream>
void sign(int a) {
    if (a < 0) {
        std::cout << "The number " << a << " is negative." << std::endl;

    }
    else if (a > 0) {
        std::cout << "The number " << a << " is positive." << std::endl;

    }
    else {
        std::cout << "The number " << a << " is zero." << std::endl;
    }
}
int main()
{
    int n;
    std::cin >> n;
    sign(n);

}