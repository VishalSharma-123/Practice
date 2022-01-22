Given two linked lists, the task is to complete the function findIntersection(), that returns the intersection of two linked lists. Each of the two linked list contains distinct node values.

Example 1:

Input:
LinkedList1: 9->6->4->2->3->8
LinkedList2: 1->2->8->6
Output: 6 2 8

LOGIC:
1)it uses mapping for it
2)as both list have distinct elements, add the frequency in it
3)in unordered map, search takes average time of O(1)
4)thus for union, print key havning value 2, for union just print all of the keys
5)Time Compelxity: O(n+m)
6)Space Compelxity: O(n+m)
