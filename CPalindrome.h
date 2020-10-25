#include <iostream>
#include <string>

class CPalindrome
{
private:
    /* data */
public:
    CPalindrome();
    ~CPalindrome();

    static std::string even_palindrome(std::string &s);
    static int near_palindrome(const std::string &s);
    static bool create_palindrome(const std::string &s);
    static std::string find_palindrome(std::string &s);
    static std::string longest_palindrome(std::string &s);
};

