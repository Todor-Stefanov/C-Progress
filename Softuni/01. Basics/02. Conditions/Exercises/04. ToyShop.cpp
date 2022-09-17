#include <iostream>
using namespace std;

//1. Цена на екскурзията - реално число в интервала [1.00 … 10000.00]
// 2. Брой пъзели - цяло число в интервала[0… 1000]
// 3. Брой говорещи кукли - цяло число в интервала[0 … 1000]
// 4. Брой плюшени мечета - цяло число в интервала[0 … 1000]
// 5. Брой миньони - цяло число в интервала[0 … 1000]
// 6. Брой камиончета - цяло число в интервала[0 … 1000]

int main()
{
	double exPrice;
	cin >> exPrice;

	int puzzles, dolls, teddies, minions, lorries, toySum;
	cin >> puzzles >> dolls >> teddies >> minions >> lorries;
	toySum = puzzles + dolls + teddies + minions + lorries;
	double toyPrice = (2.60 * puzzles) + (3 * dolls) + (4.10 * teddies) + (8.20 * minions) + (2 * lorries);
	if (toySum >= 50) {
		toyPrice = toyPrice * 0.75;

	}
	double naem = toyPrice * 0.1;
	double leftMoney = toyPrice - naem;
	cout.setf(ios::fixed);
	cout.precision(2);

	if (exPrice <= leftMoney) {
		cout << "Yes! " << leftMoney - exPrice << " lv left." << endl;
	}
	else {
		cout << "Not enough money! " << abs(exPrice - leftMoney) << " lv needed." << endl;

	}

	return 0;
}