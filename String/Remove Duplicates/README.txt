Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
For Example:
ab: Number of insertions required is 1. bab or aba
aa: Number of insertions required is 0. aa
abcd: Number of insertions required is 3. dcbabcd


Example 1:

Input: str = "abcd"
Output: 3
Explanation: Inserted character marked
with bold characters in dcbabcd
Example 2:

Input: str = "aa"
Output: 0
Explanation:"aa" is already a palindrome.


Logic:
1) Same as question of anagram
2) travers the string and record the ASCII value of character
3) in the array of ASCII, for the first appearance of character, change its value to 1
4) if same character appears, it will no be zero, means already occured, thus doesnt append it
5) Tiem Complexity O(n)
6) Space Compelxity O(n)