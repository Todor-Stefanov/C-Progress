#include <iostream>
using namespace std;

int main()
{
    int najlon, paint, razreditel, hours;
    cin >> najlon >> paint >> razreditel >> hours;
    double Price = (paint * 1.1 * 14.50) + ((2 + najlon) * 1.50) + (razreditel * 5) + 0.40;
    double pariZaMaistor = 0.3 * Price * hours;
    double totalPrice = Price + pariZaMaistor;
    cout << totalPrice << endl;
    return 0;
}

