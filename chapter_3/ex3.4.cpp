/*
 * Exercise 3.4: Write a program to read two strings and report whether the
 * strings are equal. If not, report which of the two is larger. Now, change
 * the program to report whether the strings have the same length, and if
 * not, report which is longer.
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    // Declare s1 and s2
    string s1, s2;

    // User input
    cout << "Type string 1:" << endl;
    // cin >> s1;
    getline(cin, s1);
    cout << "Type string 2:" << endl;
    // cin >> s2;
    getline(cin, s2);

    // Compare size
    if (s1 == s2)
    {
        cout << "Two strings are equal" << endl;
    }
    else if (s1 > s2)
    {
        cout << s1 << " is larger than " << s2 << endl;
    }
    else
    {
        cout << s1 << " is smaller than " << s2 << endl;
    };

    // Compare length
    if (s1.size() == s2.size())
    {
        cout << "Two strings have the same length" << endl;
    }
    else if (s1.size() > s2.size())
    {
        cout << s1 << " is longer than " << s2 << endl;
    }
    else
    {
        cout << s1 << " is shorter than " << s2 << endl;
    }
}