#include <iostream>
using std::cin;
using std::cout;


int main()
{
    char again = 'y';

    while (again == 'y') {
        cout << "\n**Played an exciting game**" << std::endl;
        cout << "Do you want to play again? (y/n): ";
        cin >> again;
    }
    cout << "\nOkay, bye!\n\n";

    return 0;
}
