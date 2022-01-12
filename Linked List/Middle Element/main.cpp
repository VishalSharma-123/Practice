#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class Nodeoperation{
    public:
        void pushNode(class Node **head_ref, int data_val){

            class Node *new_node = new Node();
            new_node->data = data_val;
            new_node->next = *head_ref;
            *head_ref = new_node;
        }

        void printNode(class Node *head){
            while (head!= NULL){
                cout << head->data << "->";
                head = head->next;
            }
            cout << "NULL" << endl;
        }

        void printMiddle(class Node *head){
            struct Node *fast = head;
            struct Node *slow = head;

            if (head!= NULL){
                while (fast != NULL && fast->next != NULL){
                    fast = fast->next->next;
                    slow = slow->next;
                }

                cout << "The middle elemnt is: " << slow->data << endl;
            }
        }

};

int main() {
    class Node*head = NULL;
    class Nodeoperation *temp = new Nodeoperation();
    for (int i = 5; i>=0; i--){
        temp -> pushNode(&head, i);
        temp -> printNode(head);
        temp -> printMiddle(head);
    }

    return 0;
}