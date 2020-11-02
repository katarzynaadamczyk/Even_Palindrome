#include <iostream>
#include <string>
#include <map>
#include <vector>
#include "CPalindrome.h"

using namespace std;

//**********************************************************************************************

CPalindrome::CPalindrome()
{
}

CPalindrome::~CPalindrome()
{
}

//checks correctness of provided string
bool CPalindrome::if_correct(const std::string &s)
{
    for (auto i = s.begin(); i < s.end(); i++)
    {
        if (!(*i >= 'a' && *i <= 'z'))
        {
            return false;
        }
    }
    return true;
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
int CPalindrome::to_palindrome(const std::string &s)
{
    int sum {};
    for (auto i = s.begin(), j = s.end() - 1; j > i; i++, j--)
    {
        int pom {};
        if (*i > *j)
        {
            pom = static_cast<int>(*i - *j);
        }
        else
        {
            pom = static_cast<int>(*j - *i);
        }
        if (pom > 13)
        {
            pom = 26 - pom;
        }
        sum += pom; 
    }
    return sum;
}
//**********************************************************************************************

//**********************************************************************************************
//returns minimum number of changes that are needed to change the given string into a near-palidrome (possible only increasing or decreasing of letters)
int CPalindrome::to_near_palindrome(const std::string &s)
{
    //TODO
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
//rearranges letters in given string to make a lowest palindrome, if it is not possible return "None"
string CPalindrome::find_palindrome(std::string &s)
{
    //create a vector counts the quantity of each letter in given string
    vector<size_t> chars(26, 0);
    for (auto i = s.begin(); i < s.end(); i++)
    {
        chars[*i - 'a']++;
    }

    //check if there is a possibily to create a palidrome
    size_t odd_count {};
    for (auto i = chars.begin(); i < chars.end(); i++)
    {
        if (*i % 2 != 0)
        {
            odd_count++;
        }
    }
    if (s.size() % 2 == 0 && odd_count == 0 || s.size() % 2 == 1 && odd_count == 1)
    {
        string ret(s.size(), ' ');
        int i {};
        for (size_t j = 0, n = s.size(); j < n / 2; j++)
        {
            while (chars[i] < 2 && i < chars.size())
            {
                i++;
            }
            ret[j] = 'a' + i;
            ret[n - 1 - j] = ret[j];
            chars[i] -= 2;
        }
        if (odd_count)
        {
            i = 0;
            while (chars[i] == 0)
            {
                i++;
            }
            ret[s.size() / 2] = 'a' + i;
        }
        return ret;
    }
    else
    {
        return "None";
    }
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