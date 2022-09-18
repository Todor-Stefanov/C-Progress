#include <iostream>
using namespace std; 

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 1000) {
        cout << "Your score is greater than or equal to 1000. Impressive!" << endl;
    }
    else if (score >= 500) {
        cout << "Your score is greater than or equal to 500 but less than 1000. Decent." << endl;
    }
    else if (score >= 250) {
        cout << "Your score is greater than or equal to 250 but less than 500. Not bad." << endl;
    }
    else {
        cout << "You scored less than 250. Nothing to brag about." << endl;
    }
    return 0;
}

