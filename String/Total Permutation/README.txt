Given a string S. The task is to print all permutations of a given string in lexicographically sorted order.

 

Example 1:

Input: ABC
Output:
ABC ACB BAC BCA CAB CBA
Explanation:
Given string ABC has permutations in 6 
forms as ABC, ACB, BAC, BCA, CAB and CBA .
Example 2:

Input: ABSG
Output:
ABGS ABSG AGBS AGSB ASBG ASGB BAGS 
BASG BGAS BGSA BSAG BSGA GABS GASB 
GBAS GBSA GSAB GSBA SABG SAGB SBAG 
SBGA SGAB SGBA
Explanation:
Given string ABSG has 24 permutations.

Logcic:
1) It is a simple example of backtracking algorithm
2) it starts with index 0, and tarts swapping from index 0 till the end
3) gets called recursively and happends till the end.
4) Time Compelxity O(N.N!)
5) Space Compelxity O(N)
6) BACKTRACKING ALGORITHM IS MUST