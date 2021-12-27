Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.


Example 1:

Input:
N = 5
Arr[] = {1,2,3,-2,5}
Output:
9
Explanation:
Max subarray sum is 9
of elements (1, 2, 3, -2, 5) which 
is a contiguous subarray.

Logic:

1) it uses Kadane's Algorithm
2) initialise two vairables, max_so_far = INT_MIN and max = 0
3) in the max, add array elements as it is being traversed and compare it with max so max_so_far
4) if max is greater than max_so_far, then assign max to integers.
5) here INT_MIN is used. Please note the followign purpose.

NOTE: INT_MAX is a macro that specifies that an integer variable cannot store any value beyond this limit. 
INT_MIN specifies that an integer variable cannot store any value below this limit. 
Values of INT_MAX and INT_MIN may vary from compiler to compiler