//demo-123145
#include <iostream>
#include "prime.h"

/// @brief 
/// @return 
int main() {
    std::cout << "helloword" << std::endl;

    std::cout << "请输入一个整数，判断是否为质数：";
    long long x;
    if (!(std::cin >> x)) {
        std::cerr << "输入无效" << std::endl;
        return 1;
    }

    if (isPrime(x))
        std::cout << x << " 该整数是质数" << std::endl;
    else
        std::cout << x << " 该整数不是质数" << std::endl;

    return 0;
}