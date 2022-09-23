#include <iostream>

using namespace std;
int main()
{
	const int ROWS = 3;
	const int COLUMNS = 3;
	char board[ROWS][COLUMNS] = { {'O', 'X', 'O'},
								  {' ', 'X', 'X'},
								  {'X', 'O', 'O'} };
	cout << "Here is the tic-tac-toe board: " << endl;
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n'X' moves to the empty location." << endl;
	cout << "Now the tic-tac-toe board look like this: " << endl;
	board[1][0] = 'X';
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			cout << board[i][j];
		}
		cout << endl;
	}
	cout << "\n'X' wins!" << endl;



	return 0;
}