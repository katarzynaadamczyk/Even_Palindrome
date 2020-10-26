#include <iostream>
#include <string>
#include "CPalindrome.h"

using namespace std;

CPalindrome::CPalindrome()
{
}

CPalindrome::~CPalindrome()
{
}

//checks if given string is a palindrome
bool CPalindrome::if_palindrome(const std::string &s)
{
    return false;
}

//returns minimum number of changes that are needed to change the given string into a palidrome (possible only inceasing or deacrising of letters)
int CPalindrome::near_palindrome(const std::string &s)
{
    return 0;
}
    
//checks if there can be a removal of one letter to change the given string into a palidrome
bool CPalindrome::create_palindrome(const std::string &s)
{
    return false;
}
    
//rearranges letters in given string to make a palindrome, if it is not possible return "None"
string CPalindrome::find_palindrome(std::string &s)
{
    return "";
}
    
//finds the longest palidrome in given string, if there is none return "None"
string CPalindrome::longest_palindrome(std::string &s)
{
    return "";
}
    
//returns the smallest alphabetically string that is a near palindrome, doing as few operations as possible (possible is only changing of letter into a different one)
string CPalindrome::even_palindrome(std::string &s)
{
    return "";
}

//checks if given integer is a palindrome
bool CPalindrome::int_is_palindrome(int &i)
{
    return false;
}