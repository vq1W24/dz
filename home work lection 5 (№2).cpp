#include <iostream>

int main() {
    int n = 10;
    int factorial = 1;
    while (n > 0) {
        factorial *= n;
        n--;
    }
    std::cout << "Факториал числа 10 равен " << factorial << std::endl;

    return 0;
}