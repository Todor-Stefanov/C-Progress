#include <iostream>
using namespace std;

int main()
{
    int chicken, fish, vegetarian;
    cin >> chicken >> fish >> vegetarian;
    double price = (fish * 12.40) + (chicken * 10.35) + (vegetarian * 8.15);
    
    double desert = price * 0.2;
   
    double overallPrice = price + desert + 2.50;
    cout << overallPrice << endl;
    return 0;
}

