Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.

Example 1:

Input:
N = 2
LinkedList: 1->2->3->4->5->6->7->8->9
Output: 8
Explanation: In the first example, there
are 9 nodes in linked list and we need
to find 2nd node from end. 2nd node
from end os 8.  
Example 2:

Input:
N = 5
LinkedList: 10->5->100->5
Output: -1
Explanation: In the second example, there
are 4 nodes in the linked list and we
need to find 5th from the end. Since 'n'
is more than the number of nodes in the
linked list, the output is -1.


LOGIC:
1) it can be solved by two methods
2) first one is by normally calculating the length of the linekd list and subtract the n to get the pos.
3) the second method uses two pointers, main and reference pointers
4) first push ref pointer to n position after
5) make a lopp till ref reaches the NULL value
6) print the main pointer data
7) Time compelxity of both: O(n)
8) Space compelxity of both: O(1)
