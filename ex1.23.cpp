/*
 * Exercise 1.23: Write a program that reads several transactions and counts
 * how many transactions occur for each ISBN.
 *
 * Exercise 1.24: Test the previous program by giving multiple transactions
 * representing multiple ISBN s. The records for each ISBN should be grouped
 * together.
 */
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    if (std::cin >> total) {
        Sales_item trans;
        while (std::cin >> trans) {
            if (total.isbn() == trans.isbn()) {
                total += trans;
            } else {
                std::cout << total << std::endl;
                total = trans;
            }
        }
        std::cout << total << std::endl;
    }
    return 0;
}
