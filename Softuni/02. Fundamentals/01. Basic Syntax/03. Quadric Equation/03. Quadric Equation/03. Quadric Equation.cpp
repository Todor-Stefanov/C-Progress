/* Write a program that enters the coefficients a, b, and c of
a quadratic equation a* x2 + b * x + c = 0 
and calculates and prints its real roots. */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double D(pow(b, 2) - (4 * a * c));
    if (D == 0) {
        double root((-b) / (2 * a));
        cout << root << endl;
    }
    else if (D > 0) {
        double root1((-b + sqrt(D)) / (2 * a)), root2((-b - sqrt(D)) / (2 * a));
        cout << root1 << " " << root2 << endl;
    }
    else {
        cout << "no roots" << endl;
    }
    return 0;
}