#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;

    short lives, aliensKilled; // can initialize multible variables of the same type on one line, as well as giving them values

    score = 0;
    distance = 1500.92;
    playAgain = 'N';
    shieldsUp = true;

    lives = 3;
    aliensKilled = 12;

    double engineTemp = 350.23;

    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain: " << playAgain << endl;
    cout << "lives: " << lives << endl;
    cout << "aliensKilled" << aliensKilled << endl;

    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout << "fuel: " << fuel << endl;

    typedef unsigned short int ushort;  // typedef (long type name) shorter name 

    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;

    return 0; 
}