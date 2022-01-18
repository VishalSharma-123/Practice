Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.

 

Example 1:

Input:
LinkList1 = 3->6->9->common
LinkList2 = 10->common
common = 15->30->NULL
Output: 15
Explanation:
Y ShapedLinked List
Example 2:

Input: 
Linked List 1 = 4->1->common
Linked List 2 = 5->6->1->common
common = 8->4->5->NULL
Output: 8
Explanation: 

4              5
|              |
1              6
 \             /
  8   -----  1 
   |
   4
   |
  5
  |
  NULL       



Logic:
1) while making the link list, assign another pointer as the flag
2) this flag will keep track if the node is visited or not
3) each time visited increment by one
4) as both list will be traversed once, the intersection point and after that will have flag = 2
5) traverse once again, but this time stop the loop as soon as flag has a value of 2
6) Time Compelxity: O(n+m)
7) Space Complexity: O(1)