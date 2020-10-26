#include <iostream>
#include <string>
#include "CPalindrome.h"

using namespace std;

int main(void)
{
    cout << "Welcome to Palindromic Quests program" << endl;
    string s;
    while (s != "end")
    {
        cout << "Please enter the string that will be checked if it is a palindrome, if you write \"end\" the program will end." << endl;
        cout << "Your input: ";
        getline(cin, s);
        if (CPalindrome::if_palindrome(s))
        {
            cout << "Given string is a palindrome" << endl;
        }
        else
        {
            cout << "Given string is not a palindrome" << endl;
        }
        if (CPalindrome::if_one_sign_away_from_np(s))
        {
            cout << "In given string one letter can be removed to create a near-palindrome" << endl;
        }
        else
        {
            cout << "Given string cannot be changed to a near-palidrome by removing one letter" << endl;
        }
        
        cout << endl;
    }
    return 0;
}