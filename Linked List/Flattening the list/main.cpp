#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *right;
        Node *down;
};

Node *head = NULL;

Node *pushNode(Node *head_ref, int data_val){
    Node *new_node = new Node();
    new_node->data = data_val;
    new_node->right = NULL;
    new_node->down = head_ref;
    head_ref= new_node;

    return head_ref;
}

void printNode(){
    Node *temp = head;
    while (temp!= NULL){
        cout << temp->data << "->";
        temp = temp->down;
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
        result->down = merge(a->down, b);
    }

    if (b->data < a->data){
        result = b;
        result->down = merge(a, b->down);
    }

    result->right = NULL;
    return result;
}

Node * flat(Node *root){

    if (root == NULL || root->right == NULL){
        return root;
    }

    root->right = flat(root->right);
    root = merge(root, root->right);

    return root;
}

int main() {
    head = pushNode(head, 30);
    head = pushNode(head, 8);
    head = pushNode(head, 7);
    head = pushNode(head, 5);
  
    head->right = pushNode(head->right, 20);
    head->right = pushNode(head->right, 10);
  
    head->right->right = pushNode(head->right->right, 50);
    head->right->right = pushNode(head->right->right, 22);
    head->right->right = pushNode(head->right->right, 19);
  
    head->right->right->right = pushNode(head->right->right->right, 45);
    head->right->right->right = pushNode(head->right->right->right, 40);
    head->right->right->right = pushNode(head->right->right->right, 35);
    head->right->right->right = pushNode(head->right->right->right, 20);
  

    head = flat(head);
  
    printNode();
    return 0;
}

