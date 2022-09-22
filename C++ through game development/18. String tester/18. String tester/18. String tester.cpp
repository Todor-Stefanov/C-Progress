#include <iostream>
#include <string>

using namespace std;
int main()
{
    string word1 = "Game";
    string word2("Over");
    string word3(3, '!'); // have to declare the string with '' instead of "" 

    string phrase = word1 + ' ' + word2 + word3;
    cout << "The phrase is: " << phrase << endl;

    cout << "\nThe phrase has " << phrase.length() << " characters in it. (with .lenght())" << endl;

    cout << "\nThe phrase has " << phrase.size() << " characters in it. (with .size())" << endl;

    cout << "\nThe character at position 0 is: " << phrase[0] << endl;

    cout << "\nChanging the character at position 0 from 'G' to 'L'." << endl;
    phrase[0] = 'L';
    cout << "The phrase is now: " << phrase << endl;
    cout << endl;

    for (int i = 0; i < phrase.size(); i++) {
        cout << "Character at position " << i << " is:" << phrase[i] << endl;
    }

    cout << "\nThe sequence Over begins at location " << phrase.find("Over") << endl;
    
    if (phrase.find("random") == string::npos) {
        cout << "\n'random' is not in the phrase" << endl;
    }
    
    phrase.erase(4, 5);
    cout << "\nThe phrase now is: " << phrase << endl;
    
    phrase.erase(4);
    cout << "The phrase now is: " << phrase << endl;

    phrase.erase();
    cout << "The phrase now is: " << phrase << endl;

    if (phrase.empty()) {
        cout << "\nThe phrase is no more." << endl;
    }
    return 0;
}
