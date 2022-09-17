#include <iostream>
#include <string>
#include <math.h>


using namespace std;

int main()
{
    string series;
    getline(cin, series);
    int lenghtEp, lenghtBreak;
    cin >> lenghtEp >> lenghtBreak;
    double lunchTime =  (1 / 8.0) * lenghtBreak;
    double breakTime = (1 / 4.0) * lenghtBreak;
    double remaningTime = lenghtBreak - (breakTime + lunchTime);
    if (remaningTime - lenghtEp >= 0) {
        cout << "You have enough time to watch " << series << " and left with " << ceil(abs(lenghtEp - remaningTime)) << " minutes free time." << endl;
    }
    else {
        cout << "You don't have enough time to watch " << series << ", you need " << ceil(abs(remaningTime - lenghtEp)) << " more minutes." << endl;
    }
    return 0;
}
