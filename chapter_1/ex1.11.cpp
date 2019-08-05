/*
 * Exercise 1.11: Write a program that prompts the user for two integers.
 * Print each number in the range specified by those two integers.
 */
#include <iostream>

int main()
{
    std::cout << "Please enter two numbers: " << std::endl;
    int val1 = 0, val2 = 0;
    std::cin >> val1 >> val2;

    // Assume we do not know "if" statement
    while (val1 < val2) {
        std::cout << val1 << std::endl;
        ++val1;
    };
    while (val2 < val1) {
        std::cout << val2 << std::endl;
        ++val2;
    };
    while (val1 == val2) {
        std::cout << val2 << std::endl;
        ++val1;
    };

    return 0;
}
