#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        int flag;
        Node *next;
};

class Nodeoperation{
    public:
        void pushNode(class Node **head_ref, int data_val){

            class Node *new_node = new Node();
            new_node->data = data_val;
            new_node->flag = 0;
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

        void traverse(Node *head){
            while (head != NULL){
                if (head->flag == 0){
                    head->flag = 1;
                    head = head->next;
                }
                else{
                    cout << "Loop is found at node value: " << head->data << endl;
                    return;
                }
            }
        }

};

int main() {
    class Node*head = NULL;
    class Nodeoperation *temp = new Nodeoperation();
    temp ->pushNode(&head, 1);
    temp ->pushNode(&head, 2);
    temp ->pushNode(&head, 3);
    temp ->pushNode(&head, 4);
    temp ->pushNode(&head, 100);
    temp->printNode(head);
    head->next->next->next = head;
    temp->traverse(head);

    return 0;
}