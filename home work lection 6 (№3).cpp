#include <iostream>

int main() {
    int sum = 0;
    int num = 1;

    while (sum <= 1000) {
        sum += num;
        num++;
    }

    std::cout << "Сумма чисел: " << sum << std::endl;

    return 0;
}