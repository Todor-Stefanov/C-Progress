#include <iostream>
/* in order to avoid std::cout, std::endl, ...
 I can do the following thing: 

using namespace std; - which will give me direct access to all the elements from the std namespace 

using std::cout; - which will give me access only to this element
using std::endl;*/

int main() {

	std::cout << "Let's the game begin" << std::endl;

	return 0;
}