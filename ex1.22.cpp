/*
 * Exercise 1.22: Write a program that reads several transactions for the same
 * ISBN . Write the sum of all the transactions that were read.
 */
#include <iostream>
#include "Sales_item.h"

int main()
{
    std::cout << "Enter all transactions with the same ISBN: " << std::endl;
    Sales_item total, entry;
    while(std::cin >> entry){
        total += entry;
    };
    std::cout << total << std::endl;
    return 0;
}
