#include <iostream>
#include <string>
#include <map>
#include "CPalindrome.h"

using namespace std;

//**********************************************************************************************

CPalindrome::CPalindrome()
{
}

CPalindrome::~CPalindrome()
{
}


//**********************************************************************************************
//checks if given string is a palindrome
bool CPalindrome::if_palindrome(const std::string &s)
{
    cout << s << endl;
    
    auto itb {s.begin()};
    auto ite (s.end() - 1);
    while (*itb == *ite && ite > itb)
    {
        ite--;
        itb++;
    }
    if (ite > itb)
    {
        return false;
    }
    else
    {
        return true;
    }
}
//**********************************************************************************************



//**********************************************************************************************
//returns minimum number of changes that are needed to change the given string into a palidrome (possible only increasing or decreasing of letters)
int CPalindrome::near_palindrome(const std::string &s)
{
    return 0;
}
//**********************************************************************************************


//**********************************************************************************************
//checks if there can be a removal of one letter to change the given string into a palidrome
bool CPalindrome::if_one_sign_away(const std::string &s)
{
    for (int i = 0, n = s.size(); i < n; i++)
    {
        if (if_palindrome(s.substr(0,i) + s.substr(i+1, n)))
        {
            return true;
        }
    }
    return false;
}
//**********************************************************************************************

//**********************************************************************************************
//checks if there can be a removal of one letter to change the given string into a near-palidrome
bool CPalindrome::if_one_sign_away_from_np(const std::string &s)
{
    map<char,int> set;
    for (auto it = s.begin(); it < s.end(); it++)
    {
        if (set.find(*it) == set.end())
        {
            set[*it] = 1;
        }
        else
        {
            set.find(*it)->second++;
        }
    }
    int odd_count {};
    for (auto it = set.begin(); it != set.end(); it++)
    {
        if (it->second % 2 != 0)
        {
            odd_count++;
        }
    }
    if ((s.size() % 2 == 0 && odd_count < 3) || (s.size() % 2 == 1 && odd_count < 2))
    {
        return true;
    }
    return false;
}
//**********************************************************************************************


//**********************************************************************************************
//rearranges letters in given string to make a palindrome, if it is not possible return "None"
string CPalindrome::find_palindrome(std::string &s)
{
    return "";
}
//**********************************************************************************************


//**********************************************************************************************
//finds the longest palidrome in given string, if there is none return "None"
string CPalindrome::longest_palindrome(std::string &s)
{
    return "";
}
//**********************************************************************************************


//**********************************************************************************************
//returns the smallest alphabetically string that is a near palindrome, doing as few operations as possible (possible is only changing of letter into a different one)
string CPalindrome::even_palindrome(std::string &s)
{
    return "";
}
//**********************************************************************************************


//**********************************************************************************************
//checks if given integer is a palindrome
bool CPalindrome::int_is_palindrome(int &i)
{
    return false;
}
//**********************************************************************************************