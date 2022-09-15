#include <iostream>
using namespace std;

int main()
{
    double CubicMeteters;
    cin >> CubicMeteters;

    double price = CubicMeteters * 7.61;
   
    double discount = price * 0.18;
    double finalPrice = price - discount ;

    cout << "The final price is: " << finalPrice << " lv." << endl;
    cout << "The discount is: " << discount << " lv." << endl;

    return 0;

}