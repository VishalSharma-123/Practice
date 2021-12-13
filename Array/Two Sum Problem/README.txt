Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

 

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.


Logic:

1) initialise starting point and sum
2) tracerse the array until sum is reached
3) if sum is found print it
4) else subtract the starting part of the sub array and restart the loop
5) takes O(n) time.