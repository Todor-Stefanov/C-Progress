/*Write a program that receives two integer numbers and one of the following four
instructions (as a single symbol): +, -, *, / on the next line. 
The operations are as follows: + is addition, - is subtraction, * is multiplication, and / is division. 

The function should print:
•	The calculated number
•	"Can't divide by zero." - on certain conditions
*/
#include <iostream>
using namespace std;
void operations(double x, double y, char operation) {
    if (operation == '+') {
        std::cout << x + y;
    }
    else if (operation == '-') {
        std::cout << x - y;
    }
    else if (operation == '*') {
        std::cout << x * y;
    }
    else if (operation == '/') {
        if (y == 0) {
            std::cout << "Can't divide by zero.";
        }
        else {
            std::cout << x / y;
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    char op;
    cin >> op;
    operations(a, b, op);

}
