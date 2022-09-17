#include <iostream>
using namespace std;

int main()
{
    double budget, clothingPrice, overallClothingPrice, decor, ClothingPrice;
    cin >> budget;
    int statists;
    cin >> statists;
    cin >> clothingPrice;
    overallClothingPrice = statists * clothingPrice;
    decor = budget * 0.1;
    if (statists > 150) {
        overallClothingPrice -= (overallClothingPrice * 0.1);

    }
    cout.setf(ios::fixed);
    cout.precision(2);

    if ((decor + overallClothingPrice) <= budget) {
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " << budget - (decor + overallClothingPrice) << " leva left." << endl;
    }
    else {
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " << (decor + overallClothingPrice) - budget << " leva more." << endl;
    }
    return 0;
}

