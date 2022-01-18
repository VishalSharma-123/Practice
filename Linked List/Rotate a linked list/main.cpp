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

        void circle(Node **head_ref){
            Node *head = *head_ref;
            Node *temp = *head_ref;

            while (temp->next != NULL){
                temp = temp->next;
            }

            temp->next = *head_ref;
        }

        void rotate(Node **head_ref, int k){
            int i = 0;
            Node *prev = NULL;
            Node *temp = *head_ref;

            while (i<k){
                prev = temp;
                temp = temp->next;
                i++;
            }

            while (temp!=prev){
                cout << temp->data << "->";
                temp = temp->next;
            }
            cout << prev->data << "->NULL\n";
        }

};

int main() {
    class Node*head = NULL;
    class Nodeoperation *temp = new Nodeoperation();
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int i = 7; i>=0; i--){
        temp -> pushNode(&head, data[i]);
    }
    temp->printNode(head);
    temp -> circle(&head);
    temp ->rotate(&head, 4);

    return 0;
}