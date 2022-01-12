Given two stringsaandbconsisting of lowercase characters. The task is to check whether two given strings
are an anagram of each other or not. An anagram of a string is another string that contains the same 
characters, only the order of characters can be different. For example, act and tac are an anagram of 
each other.

Example 1:

Input:a = geeksforgeeks, b = forgeeksgeeks
Output: YES
Explanation: Both the string have samecharacters with same frequency. So, both are anagrams.

Example 2:

Input:a = allergy, b = allergic
Output: NO
Explanation:Characters in both the stringsare not same, so they are not anagrams.

Logic:
1) Traverse the array and store the ASCII value of both strings in two diffrerent arrays
2) After recording the values, compare them
3) Time Complexity O(n);
4) Space Compelxity O(1);