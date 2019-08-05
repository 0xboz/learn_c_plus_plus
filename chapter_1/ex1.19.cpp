/*
 * Revise the program you wrote for the exercises in § 1.4.1 (p.
 * 13) that printed a range of numbers so that it handles input in which the first
 * number is smaller than the second.
 *
 * Here is the original excercise.
 * Exercise 1.11: Write a program that prompts the user for two integers.
 * Print each number in the range specified by those two integers.
 *
 */
#include <iostream>

int main()
{
    std::cout << "Please enter two numbers: " << std::endl;
    int val1 = 0, val2 = 0;
    std::cin >> val1 >> val2;

    // Assume we do not know "if" statement
    // while (val1 < val2) {
    //     std::cout << val1 << std::endl;
    //     ++val1;
    // };
    // while (val2 < val1) {
    //     std::cout << val2 << std::endl;
    //     ++val2;
    // };
    // while (val1 == val2) {
    //     std::cout << val2 << std::endl;
    //     ++val1;
    // };

    // Implement "if" statement
    if (val1 <= val2) {
        while (val1 <= val2) {
            std::cout << val1 << std::endl;
            ++val1;
        }
    } else {
        while (val2 <= val1) {
            std::cout << val2 << std::endl;
            ++val2;
        }
    }
    return 0;
}
