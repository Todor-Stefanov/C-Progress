
/*You are given the coordinates of two points on a Cartesian coordinate system - X1, Y1, X2, and Y2. 
Create a method that prints the point that is closest to the center 
of the coordinate system (0, 0) in the format (X, Y).
If the points are at the same distance from the center, print only the first one.*/

#include <iostream>
void centerPoint(double X1, double Y1, double X2, double Y2) {
    if (X1 * X1 + Y1 * Y1 <= X2 * X2 + Y2 * Y2) {
        std::cout << "(" << X1 << ", " << Y1 << ")";
    }

    else {
        std::cout << "(" << X2 << ", " << Y2 << ")";
    }
}
int main()
{
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    centerPoint(x1, y1, x2, y2);
    return 0;
}
