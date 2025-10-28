//demo-123145
#include <iostream>
#include "prime.h"
#include "add.h"
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

    std::cout << "Please input two numbers for addition:";
    double a = 0, b = 0;
    if (!(std::cin >> a >> b)) {
        std::cerr << "Invalid input" << std::endl;
        return 1;
    }
    std::cout << "The sum is: " << add(a, b) << std::endl;

    return 0;
}