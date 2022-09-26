/* Read two integer numbers. Calculate the factorial of each number.
Divide the first result by the second and print the division 
formatted to the second decimal point. */
#include <iostream>
#include <iomanip>
using namespace std;
double fact(int number) {
    double factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }
    return factorial;
}
void factDiv(double a, double b) {
    cout << a / b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << std::fixed;
    cout << std::setprecision(2);
    factDiv(fact(a), fact(b));


    return 0;
}

