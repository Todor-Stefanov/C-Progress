#include <iostream>
using namespace std;

int main()
{
    int dogFood, catFood;
    cin >> dogFood >> catFood;

    double price = (dogFood * 2.50) + (catFood * 4);
    cout << price << " lv." << endl;


    return 0;
}
