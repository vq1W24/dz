#include <iostream>
using namespace std;
int main(){
    int a = {10};
    int b = ++a;
    b += 3;
    b /= 2;
    std::cout << b;
    return 0;
}