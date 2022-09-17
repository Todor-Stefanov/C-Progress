#include <iostream>
using namespace std;

int main()
{
	string figure;
	cin >> figure;

	cout.setf(ios::fixed);
	cout.precision(3);

	if (figure == "square") {
		double a;
		cin >> a;
		cout << a*a << endl;
	}
	else if (figure == "rectangle") {
		double a, b;
		cin >> a >> b;
		cout << a * b << endl;
	}
	else if (figure == "circle") {
		double r, pi;
		cin >> r;
		pi = 3.14159265359;
		cout << pi * r * r << endl;
	}
	else {
		double a, ha;
		cin >> a >> ha;
		cout << a * ha / 2 << endl;
	}
	return 0;
}

 
