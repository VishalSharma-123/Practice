#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *left, *right;
};

Node *newNode(int data_val){
    Node *temp = new Node();
    temp->data = data_val;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder_traversal(Node *root){
    stack<Node*> s1;
    Node *current  = root;

    while (current!=NULL || s1.empty() == false){

        while (current != NULL){
            s1.push(current);
            current = current -> left;
        }

        current = s1.top();
        s1.pop();

        cout << current->data << " ";
        current = current->right;
    }
}


int main() {
    Node *root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(6);
    root->left->left = newNode(1);
    root->left->right = newNode(3);
    root->right->right = newNode(8);
    root->right->left = newNode(5);
    root->right->right->left = newNode(7);

    inorder_traversal(root);
    cout << endl;
    return 0;
}

//left traversal
