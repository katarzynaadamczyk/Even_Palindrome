#include <iostream>
#include <string>
#include "CPalindrome.h"

using namespace std;

int main(void)
{
    cout << "Welcome to Palindromic Quests program" << endl;
    string s;
    int i;
    while (s != "end")
    {
        cout << "Please choose actual functionality by typing one of the following numbers: \n"
             << "0 - check if the string is a palindrome\n"
             << "1 - \n"
             << "2 - check if there can be a removal of one letter to change the given string into a palidrome\n"
             << "3 - check if there can be a removal of one letter to change the given string into a near-palidrome\n"
             << "4 - \n"
             << "5 - \n"
             << "6 - \n"
             << "7 - \n"
             << "Your choice: ";
        getline(cin, s);
        i = atoi(s.c_str());

        cout << "Please enter the data on which I will perform chosen operation, if you write \"end\" the program will end." << endl;
        cout << "Your input: ";
        getline(cin, s);
        
        switch (i)
        {
        case 0:
            if (CPalindrome::if_palindrome(s))
            {
                cout << "Given string is a palindrome" << endl;
            }
            else
            {
                cout << "Given string is not a palindrome" << endl;
            }
            break;
        case 1:
            /* code */
            break;
        case 2:
            if (CPalindrome::if_one_sign_away(s))
            {
                cout << "In given string one letter can be removed to create a palindrome" << endl;
            }
            else
            {
                cout << "Given string cannot be changed to a palidrome by removing one letter" << endl;
            }
            break;
        case 3:
            if (CPalindrome::if_one_sign_away_from_np(s))
            {
                cout << "In given string one letter can be removed to create a near-palindrome" << endl;
            }
            else
            {
                cout << "Given string cannot be changed to a near-palidrome by removing one letter" << endl;
            }
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        case 7:
            /* code */
            break;


        default:
            cout << "Given wrong number for choice \n";
            break;
        }
        
        
        
        cout << endl;
    }
    return 0;
}