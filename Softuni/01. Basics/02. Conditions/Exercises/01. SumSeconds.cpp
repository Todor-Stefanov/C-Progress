#include <iostream>
using namespace std;

int main()
{
    int first, second, third, sum;
    cin >> first >> second >> third;

    sum = first + second + third;
    int minutes, seconds;
    minutes = sum / 60;
    seconds = sum % 60;

    if (seconds < 10) {
        cout << minutes << ":0" << seconds << endl;
     }
    else {
        cout << minutes << ":" << seconds << endl;
            
    }
   

    return 0;
}