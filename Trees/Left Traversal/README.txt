Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument.

Left view of following tree is 1 2 4 8.

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8   

Example 1:

Input:
   1
 /  \
3    2
Output: 1 3


LOGIC:

it can bes olved by two methods

1) RECURSSION METHOD (main.cpp)
a utility fucniton for the left view is made
it will first travel to all the left node of the tree while recording whic level it has reached till that point
after that null point is reached
after that it will traverse to right part of the tree, wont print till that level is reached
after reachign 1 level greater than it, it will start printing again




2)LEVEL ORDERED TRAVERSAL
in this queue is used
it will first record the root node, print it, pop itself out and add the left and right node
all the nodes at a aprticular level will be recorded in the queue, and just pop out the first one
and print it

Time Complexity: O(n)
Space Complexity: O(n)

