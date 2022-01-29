#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *pushNode(class Node *head_ref, int data_val){

    Node *new_node = new Node();
    new_node->data = data_val;
    new_node->next = head_ref;
    head_ref = new_node;

    return head_ref;
}

void printNode(class Node *head){
    while (head!= NULL){
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

void reverse(Node *head){
    Node *temp1 = head;

    while (temp1!=NULL && temp1->next!=NULL){
        swap(temp1->data,temp1->next->data);
        temp1 = temp1->next->next;
    }
}

int main() {
    class Node*head = NULL;

    head = pushNode(head,8);
    head = pushNode(head,7);
    head = pushNode(head,6);
    head = pushNode(head,5);
    head = pushNode(head,4);
    head = pushNode(head,3);
    head = pushNode(head,2);
    head = pushNode(head,1);

    printNode(head);
    reverse(head);
    printNode(head);
    
    return 0;
}