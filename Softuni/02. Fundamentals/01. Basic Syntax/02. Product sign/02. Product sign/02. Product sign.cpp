#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	double product(a * b * c);
	if (product >= 0) {
		cout << "+" << endl;
	}
	else {
		cout << "-" << endl;
	}
	return 0;

}