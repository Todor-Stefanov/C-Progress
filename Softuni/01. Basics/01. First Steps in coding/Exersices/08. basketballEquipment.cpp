#include <iostream>
using namespace std;
int main()
{
	int tax;
	cin >> tax;

	double shoes, clothes, ball, accessories, overall;
	shoes = tax - (tax * 0.4);
	clothes = shoes - (shoes * 0.2);
	ball = 0.25 * clothes;
	accessories = 0.2 * ball;
	overall = tax + shoes + clothes + ball + accessories;
	cout << overall << endl;
	

	return 0;

}
