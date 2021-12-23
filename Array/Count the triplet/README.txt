Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.
 
Example 1:

Input:
N = 4
arr[] = {1, 5, 3, 2}
Output: 2
Explanation: There are 2 triplets: 
1 + 2 = 3 and 3 +2 = 5 


Logic:

1) make two functions one for binary seach and another for findng the count of triplets
2) for this the logic is, a nested loop that  will run over the array
3) and find the no of the two numbers in the sorted array with the help of banry search
4) time complexity O(n^2logn)