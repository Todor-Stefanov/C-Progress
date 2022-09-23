#include <iostream>
#include <string>
using namespace std;


int main()
{
	// declaration
	char phrase[] = "Hello world!";
	cout << "char phrase[]: " << phrase << endl; // Hello world!

	char phrase1[81] = "Hello world!...";
	
	// concatentation with string object
	string word1 = "Hello";
	char word2[] = " World!";

	string phrase3 = word1 + word2; 
	cout << phrase3 << endl; // Hello World!
	
	// comparison
	if (word1 != word2) {
		cout << "Word1 and word2 are not equal!" << endl;
	}

	// as an argument in a string object member function
	if (phrase3.find(word2) != string::npos) {
		cout << "The string cointains word2." << endl;
	}
	 
	return 0;
}
