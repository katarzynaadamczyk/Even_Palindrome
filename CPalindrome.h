#include <iostream>
#include <string>

class CPalindrome
{
private:
    /* data */
public:
    CPalindrome();
    ~CPalindrome();

//checks if given string is a palindrome
    static bool if_palindrome(const std::string &s);

//returns minimum number of changes that are needed to change the given string into a palidrome (possible only inceasing or deacrising of letters)
    static int near_palindrome(const std::string &s);
    
//checks if there can be a removal of one letter to change the given string into a palidrome
    static bool create_palindrome(const std::string &s);
    
//rearranges letters in given string to make a palindrome, if it is not possible return "None"
    static std::string find_palindrome(std::string &s);
    
//finds the longest palidrome in given string, if there is none return "None"
    static std::string longest_palindrome(std::string &s);
    
//returns the smallest alphabetically string that is a near palindrome, doing as few operations as possible (possible is only changing of letter into a different one)
    static std::string even_palindrome(std::string &s);

//checks if given integer is a palindrome
    static bool int_is_palindrome(int &i);
};

