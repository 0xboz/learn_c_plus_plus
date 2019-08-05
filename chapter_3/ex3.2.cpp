/*
 * Exercise 3.2: Write a program to read the standard input a line at a time.
 * Modify your program to read a word at a time.
 */

#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    /* Read a line at a time */
    string line;
    cout << "Add a line at a time (Press Ctrl + D to Exit)"
         << endl;
    while (getline(cin, line))
    {
        cout << line << endl;
    };

    /* Read a word at a time */
    // string word;
    // cout << "Add a line at a time (Press Ctrl + D to Exit)"
    //      << endl;
    // while (cin >> word)
    // {
    //     cout << word << endl;
    // }

    return 0;
}
