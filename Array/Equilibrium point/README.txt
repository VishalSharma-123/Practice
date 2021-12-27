Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Example 1:

Input: 
n = 5 
A[] = {1,3,5,2,2} 
Output: 3 
Explanation: For second test case 
equilibrium point is at position 3 
as elements before it (1+3) = 
elements after it (2+2). 


Logic:

1) find the sum of entire array
2) subtract the first element from the sum
3) start a  loop from position 1
4) and sttart subtracting values from the original and sum and start adding values of arr[i-1] to different variable
5) when both of them are equal print the index
6) Time O(n) and space O(1)