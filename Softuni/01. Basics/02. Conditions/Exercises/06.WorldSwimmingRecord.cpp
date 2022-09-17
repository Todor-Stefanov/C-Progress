#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double record, distance, timeMeter, neededSec, totalTime;
    cin >> record >> distance >> timeMeter;
    neededSec = distance * timeMeter;
    distance = floor(distance / 15) * 12.5;
    totalTime = neededSec + distance;
    cout.setf(ios::fixed);
    cout.precision(2);

    if (totalTime >= record) {
        cout << "No, he failed! He was " << totalTime - record << " seconds slower." << endl;

    }
    else {
        cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
    }
        
    

    return 0;
}