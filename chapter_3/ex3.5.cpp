/*
 * Exercise 3.5: Write a program to read strings from the standard input,
 * concatenating what is read into one large string. Print the concatenated
 * string. Next, change the program to separate adjacent input strings by a
 * space.
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "Type any strings (Press Ctrl + D to exit)" << endl;

    // Declare word and sum
    string word, sum;

    if (cin >> sum) // Check if there is any user input
    {
        while (cin >> word)
        {
            // Print concatenated string
            // sum += word

            // Separate adjacent input strings by a space
            sum += " " + word;
        }
    }
    cout << sum << endl; // Print the sum after user exit

    return 0;
}