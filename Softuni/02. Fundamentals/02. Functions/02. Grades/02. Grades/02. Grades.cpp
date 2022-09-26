/* Write a function that receives a grade between 2.00 and 6.00 and prints the corresponding grade in words
•	2.00 – 2.99 - "Fail"
•	3.00 – 3.49 - "Poor"
•	3.50 – 4.49 - "Good"
•	4.50 – 5.49 - "Very good"
•	5.50 – 6.00 - "Excellent"
*/

#include <iostream>
void grade(double a) {
	if (a >= 2.00 && a < 3) {
		std::cout << "Fail" << std::endl;
	}
	else if (a >= 3 && a < 3.50) {
		std::cout << "Poor" << std::endl;
	}
	else if (a >= 3.50 && a < 4.50) {
		std::cout << "Good" << std::endl;

	}
	else if (a >= 4.50 && a < 5.50) {
		std::cout << "Very good" << std::endl;
	}
	else if (a >= 5.50 && a <= 6) {
		std::cout << "Excellent" << std::endl;
	}
}
int main()
{
	double g;
	std::cin >> g;
	grade(g);

	return 0;
}

