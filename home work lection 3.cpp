#include <iostream>

int main() {
    int x;
    std::cout << "Введите число: ";
    std::cin >> x;

    bool powerOf2 = (x & (x - 1)) == 0;

    if (powerOf2) {
        std::cout << "Число является степенью двойки\n";
    } else {
        std::cout << "Число не является степенью двойки\n";
    }

    return 0;
}