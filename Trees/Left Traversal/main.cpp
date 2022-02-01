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

void leftViewUtil(Node *root, int level, int *max_level){
    if (root == NULL){
        return;
    }
    if (*max_level < level){
        cout << root->data << " ";
        *max_level = level;
    }

    leftViewUtil(root->left, level+1, max_level);
    leftViewUtil(root->right, level+1, max_level);
}

void leftView(Node *root){
    int max_level = 0;
    leftViewUtil(root, 1, &max_level);
    cout << endl;
}



int main() {
    Node *root = newNode(10);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(8);
    root->right->right = newNode(15);
    root->right->left = newNode(12);
    root->right->right->left = newNode(14);

    leftView(root);
    return 0;
}

//left traversal
