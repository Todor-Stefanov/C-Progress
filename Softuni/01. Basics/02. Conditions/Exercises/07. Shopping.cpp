#include <iostream>
using namespace std;

int main()
{
    double budget, vprice, pprice, rprice, overallprice;
    cin >> budget;

    int videocards, processors, ram;
    cin >> videocards >> processors >> ram;
    
    vprice = videocards * 250;
    pprice = vprice * 0.35 * processors;
    rprice = vprice * 0.1 * ram;
    overallprice = vprice + pprice + rprice;

    if (videocards > processors) {
        overallprice -= overallprice * 0.15;

    }
    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget >= overallprice) {
        cout << "You have " << budget - overallprice << " leva left!";

    }
    else {
        cout << "Not enough money! You need " << overallprice - budget << " leva more!";

    }
    return 0;
}
