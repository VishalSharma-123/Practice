Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
I 1
V 5
X 10
L 50
C 100
D 500
M 1000

Example 1:

Input:
s = V
Output: 5
Example 2:

Input:
s = III 
Output: 3

LOGIC:
1) Traverse the string from the last position
2) if the character is greater than the character before in traversal add it
3) if the character is smaller, then subtract it
4) Time COmpelxity O(n)
5) Space Complexity O(1)