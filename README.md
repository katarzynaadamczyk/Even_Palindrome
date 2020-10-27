# Palindromic Quests

A program that solves some palindromic issues found on tasks to do while learning algorithms.

What is a palindrome? A palindrome is a sequence of characters that reads the same backwards and forwards. A near-palidrome is a sequence of characters that rearranged create a palindrome.

Class CPalindrome has a bunch of static functions that solves different issues with palindromes. Each function assumes that given string consists only of small English letters and its size is > 1.

* bool CPalindrome::if_palindrome(const std::string &s) - checks if given string is a palindrome
* int CPalindrome::near_palindrome(const std::string &s) - returns minimum number of changes that are needed to change the given string into a palidrome (possible only inceasing or deacrising of letters by 1)
* bool CPalindrome::if_one_sign_away(const std::string &s) - checks if there can be a removal of one letter to change the given string into a palidrome
* bool CPalindrome::if_one_sign_away_from_np(const std::string &s) - checks if there can be a removal of one letter to change the given string into a near-palidrome
* std::string CPalindrome::find_palindrome(std::string &s) - rearranges letters in given string to make a palindrome, if it is not possible return "None"
* std::string CPalindrome::longest_palindrome(std::string &s) - finds the longest palidrome in given string, if there is none return "None"
* std::string CPalindrome::even_palindrome(std::string &s) - returns the smallest alphabetically string that is a near palindrome, doing as few operations as possible (possible is only changing of letter into a different one)
* bool CPalindrome::int_is_palindrome(int &i) - checks if given integer is a palindrome

Project is written in C++ using VSC. 
