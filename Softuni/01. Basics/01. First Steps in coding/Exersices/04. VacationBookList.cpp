#include <iostream>
using namespace std;
int main()
{
    int bookPages, PagesPerHour, days;
    cin >> bookPages >> PagesPerHour >> days;
    int totalHours = (bookPages / PagesPerHour) / days;
    cout << totalHours << endl;
   
    return 0;
}

