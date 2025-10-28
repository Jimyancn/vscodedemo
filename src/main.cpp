//demo-123145
#include <iostream>
#include "prime.h"
/// @brief Main entry point of the program
/// @return 0 on success, 1 on invalid input
int main() {
    std::cout << "helloword" << std::endl;

    std::cout << "Please input a number:";
    long long x=10;
    if (!(std::cin >> x)) {
        std::cerr << "Invalid input" << std::endl;
        return 1;
    }
    if (isPrime(x))
        std::cout << x << " YES" << std::endl;
    else
        std::cout << x << " NO" << std::endl;

    return 0;
}