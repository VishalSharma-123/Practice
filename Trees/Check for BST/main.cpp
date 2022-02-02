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

vector<int> v1;

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
        v1.push_back(current->data);
        current = current->right;
    }
}

bool check_BST(){
    int size = v1.size();

    for(int i = 0; i<size-1; i++){
        if (v1[i] > v1[i+1]){
            return false;
        }
    }
    return true;
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

    if (check_BST()){
        cout << "It is a BST";
    }
    else{
        cout << "Not a BST";
    }
    cout << endl;
    return 0;
}

