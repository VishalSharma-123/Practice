#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
};

class Nodeoperation{
    public:
    
    void pushNode(Node **head_ref, int data_val){
        Node *new_node = new Node();
        new_node->data = data_val;
        new_node->next = *head_ref;
        *head_ref = new_node;
    }

    void printNode(Node *head){
        while (head != NULL){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    }
};

int main() {
    class Node*head = NULL;
    class Nodeoperation *temp = new Nodeoperation();
    for (int i = 0; i<=10; i++){
        temp -> pushNode(&head, i);
    }
    temp -> printNode(head);

    return 0;
}