#include <iostream>
using namespace std;
int main()
{
    double depositedPrice;
    cin >> depositedPrice;

    int deadline;
    cin >> deadline;

    double annualPerc;
    cin >> annualPerc;

    double price = depositedPrice + deadline * ((depositedPrice * annualPerc /100 ) / 12);
    cout << price << endl;
    return 0;
}

