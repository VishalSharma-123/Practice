#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *head = NULL;
Node *head1 = NULL;
Node *head2 = NULL;


Node *pushNode(Node *head_ref, int data_val){
    Node *new_node = new Node();
    new_node->data = data_val;
    new_node->next = head_ref;
    head_ref= new_node;

    return head_ref;
}

void printNode(){
    Node *temp = head;
    while (temp!= NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

Node *merge(Node *a, Node *b){
    if (a == NULL){
        return b;
    }
    if (b == NULL){
        return a;
    }

    Node *result;

    if (a->data <= b->data){
        result = a;
        result->next = merge(a->next, b);
    }

    if (b->data < a->data){
        result = b;
        result->next = merge(a, b->next);
    }

    return result;
}

int main() {
    head1 = pushNode(head1, 40);
    head1 = pushNode(head1, 15);
    head1 = pushNode(head1, 10);
    head1 = pushNode(head1, 5);

    head2 = pushNode(head2, 20);
    head2 = pushNode(head2, 3);
    head2 = pushNode(head2, 2);

    head = merge(head1, head2);

    printNode();
    return 0;
}

