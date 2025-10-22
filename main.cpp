//demo-123145
#include <iostream>
#include "prime.h"

/// @brief Main entry point of the program
/// @return 0 on success, 1 on invalid input
int main() {
    std::cout << "helloword" << std::endl;

    std::cout << "请输入一个整数，判断该整数是否为质数：";
    long long x;
    if (!(std::cin >> x)) {
        std::cerr << "输入无效" << std::endl;
        return 1;
    }

    if (isPrime(x))
        std::cout << x << " 是质数" << std::endl;
    else
        std::cout << x << " 不是质数" << std::endl;

    return 0;
}