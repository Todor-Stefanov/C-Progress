/* Logical operators :
	! - Logical NOT - !expression
	&& - Logical AND - expr1 && expr2
	|| - Logical OR - expr1 || expr2

*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string username;
	string password;
	bool success = false;


	cout << "\tGame Designe's Network\n";

	do {
		cout << "\nUsername: ";
		cin >> username;

		cout << "Password: ";
		cin >> password;

		if (username == "Peter" && password == "peter123") {
			cout << "Weclome back, " << username << "!" << endl;
			success = true;
		}
		else if (username == "Mark" && password == "mark123") {
			cout << "Hey, " << username << "!" << endl;
			success = true;
		}
		else if (username == "Matilda" && password == "matilda123") {
			cout << "Hi, " << username << "!" << endl;
			success = true;
		}
		else if (username == "guest" || password == "guest") {
			cout << "Welcome, guest!" << endl;
			success = true;
		}
		else {
			cout << "Your login failed!" << endl;
			cout << "Try again!" << endl;
		}
	} while (!success);

	return 0;
}
