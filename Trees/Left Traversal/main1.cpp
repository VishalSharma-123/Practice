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

void leftView(Node *root){
    if (root == NULL){
        cout << "EMPTY TREE\n";
        return;
    }

    queue<Node*> q1;
    q1.push(root);

    while (q1.empty() == false){
        int n = q1.size();

        for (int i =1; i<=n; i++){
            Node *temp = q1.front();
            q1.pop();

            if (i == 1){
                cout << temp->data << " ";
            }

            if (temp->left != NULL){
                q1.push(temp->left);
            }

            if (temp->right != NULL){
                q1.push(temp->right);
            }
        }
    }
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