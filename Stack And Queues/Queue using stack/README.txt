mplement a Queue using 2 stacks s1 and s2 .
A Query Q is of 2 Types
(i) 1 x (a query of this type means  pushing 'x' into the queue)
(ii) 2   (a query of this type means to pop element from queue and print the popped element)

Example 1:

Input:
5
1 2 1 3 2 1 4 2

Output: 
2 3

Explanation: 
In the first test case
1 2 the queue will be {2}
1 3 the queue will be {2 3}
2   popped element will be 2 the queue 
    will be {3}
1 4 the queue will be {3 4}
2   popped element will be 3.


LOGIC:
1) First add all the elemets in the first stack
2) when delete operation is used, push all elements in other stack
3) pop the top element and push back the all the elements from stack 2 to stack 1
4) time Complexity: O(n)
5) Space Complexity: O(n)

NOTE: Similarly, stack can be implemented using queues. 