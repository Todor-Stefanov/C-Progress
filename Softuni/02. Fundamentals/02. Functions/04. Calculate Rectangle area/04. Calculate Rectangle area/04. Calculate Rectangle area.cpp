/* Create a function that calculates and returns the area of a rectangle by given width and height: */

#include <iostream>
void RectArea(int a, int b) {
    std::cout << a * b;
}
int main()
{
    int w, h;
    std::cin >> w >> h;
    RectArea(w, h);
    return 0;
}

