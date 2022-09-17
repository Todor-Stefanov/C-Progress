#include <iostream>
using namespace std;

int main()
{
    int pens;
    cin >> pens;
    int marker;
    cin >> marker;
    int detergant;
    cin >> detergant;
    int discountPerc;
    cin >> discountPerc;

    double totalPrice = ((pens * 5.80) + (marker * 7.20) + (detergant * 1.20)) * (1 - discountPerc / 100.0);
    cout << totalPrice << endl;



    return 0;
}
