Given two strings a and b. The task is to find if the string 'b' can be obtained by rotating another string 'a' by exactly 2 places.

Example 1:

Input:
a = amazon
b = azonam
Output: 1
Explanation: amazon can be rotated anti
clockwise by two places, which will make
it as azonam.
Example 2:

Input:
a = geeksforgeeks
b = geeksgeeksfor
Output: 0
Explanation: If we rotate geeksforgeeks by
two place in any direction , we won't get
geeksgeeksfor.

Logic:
1) rotation here refers to movement of characters in left or right direction corresponding to clockwise
   or anti-clockwise rotation
2) for anti clockwise rotation, check if s2[n-2:n] + s2[:n-2] == s1
3) for clockwise rotation, check if s2[2:n] + s2[:2] == s1
4) Time complexity O(n)
5) Space complexity O(n)