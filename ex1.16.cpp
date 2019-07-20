/*
 * Exercise 1.16: Write your own version of a program that prints the sum of
 * a set of integers read from cin.
 */
#include <iostream>

int main()
{
    std::cout << "Please enter a set of integers. Press Ctrl + D when you are done." << std::endl;
    int sum = 0;
    // Reading an Unknown Number of Inputs
    for (int val = 0; std::cin >> val; sum += val) {
    }
    std::cout << "\nThe sum is " << sum << std::endl;
    return 0;
}
