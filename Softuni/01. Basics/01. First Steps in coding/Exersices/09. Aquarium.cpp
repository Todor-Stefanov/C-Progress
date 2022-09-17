#include <iostream>
using namespace std;

int main()
{
	int lenght, width, height, volume;
	cin >> lenght >> width >> height;
	double percent, volumeInLiters, overallLiters;
	cin >> percent;
	percent = percent / 100.0;
	volume = width * lenght * height;
	volumeInLiters = volume * 0.001;
	overallLiters = volumeInLiters * (1 - percent);
	cout << overallLiters << endl;
	return 0;
}

