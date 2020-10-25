# Even Palindrome
A string is called an even palindrome if its length is even and it reads the same forwards and backwards. E.g., "noon", "aaaaaa" and "repaiddiaper" are even palindromes but "eerrdd" and "tacocat" aren't. (This is because "eerrdd" is not a palindrome and "tacocat" has an odd number of letters.)
A string is called a even near-palindrome if we can rearrange its characters to make it an even palindrome. For example, "aaaaaa", "nono" and "eerrdd" are even near-palindromes but "aaa" and "abcd" aren't. (You can rearrange "eerrdd" to form the even palindrome "redder".)
 
Suppose X and Y are two different strings of the same length. Let i be the smallest index such that the characters X[i] and Y[i] differ. If X[i] < Y[i], we say that X is lexicographically smaller than Y, and vice versa. For example, "ramp" < "rats" because 'm' < 't'.
 
You are given a String S of lowercase English letters. The length of S is even.
You are allowed to perform a sequence of operations. In each operation you can choose an index into S and replace that character by any other lowercase English letter. (You are not allowed to add or remove characters.)
Your primary goal is to turn S into an even near-palindrome T using as few operations as possible. Your secondary goal is to find the lexicographically smallest among all such T. Find and return that T.
