#include <iostream>

int main() {
    int a = 2;
    int b = 10;
    int c = 1;
    while (b > 0) {
        c *= a;
        b--;
    }
    std::cout << "2 в степени 10 равно " << c << std::endl;
}