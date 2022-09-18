#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // Getting player's info
    const int GOLD_PIECES = 900;
    int adventurers, killed, survivors;
    string leader;

    cout << "Welcome to Lost Fortune\n\n";
    cout << "PLease enter the following for your personalized adventure\n";
    
    cout << "Enter a number: ";
    cin >> adventurers;

    cout << "Enter a number, smaller than the first: ";
    cin >> killed;

    survivors = adventurers - killed;

    cout << "Enter your last name: ";
    cin >> leader;

    // Telling the story
    cout << "\nA brave group of " << adventurers << " set out on a quest --";
    cout << " in search of the lost treasure of the Ancient Dwarves. The group ";
    cout << "was led by that legendary rogue, " << leader << "." << endl;

    cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
    cout << "All fought bravely under the command of " << leader << ", ";
    cout << "and the ogres were defeated, but at a cost. ";
    cout << "Of the adventurers, " << killed << " were vanquished, leaving just " << survivors << " ";
    cout << "in the group." <<  endl;
    
    cout << "\nThe party was about to give up all hope. But while laying the deceased to rest, ";
    cout << "they stumbled upon the buried fortune. So the adventurers split " << GOLD_PIECES;
    cout << " gold pieces. " << leader << " held on to the extra " << GOLD_PIECES % survivors << " pieces to keep things fair of course." << endl;

    return 0;
}
