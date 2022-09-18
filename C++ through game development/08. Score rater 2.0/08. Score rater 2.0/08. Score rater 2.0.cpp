#include <iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 1000) {
        cout << "Congrats! Your score is 1000 or greater." << endl;
    }
    else {
        cout << "You have a score lower than 1000." << endl;
    }

    return 0;
}

