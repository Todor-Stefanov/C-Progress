/* Create a function for printing triangles as shown below: 
INPUT 3
OUTPUT:
1
1 2
1 2 3
1 2
1

INPUT 4
OUTPUT:
1
1 2
1 2 3
1 2 3 4
1 2 3
1 2
1

*/


#include <iostream>

void trianglePrinting(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j < n - i; j++) {
            std::cout << j << " ";
        }
        std::cout << "\n";
    }
    
}


int main(){
    int n;
    std::cin >> n;
    trianglePrinting(n);
    return 0;
}
 