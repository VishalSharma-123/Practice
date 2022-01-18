#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        int flag;
        Node *next;
};

void traverse(class Node *head){
            while (head != NULL){
                head->flag +=1;
                head = head->next;
            }
}

int main() {
    Node *new_node;

    Node *head1 = new Node();
    head1->data = 10;

    Node *head2 = new Node();
    head2->data = 3;

    new_node = new Node();
    new_node->data = 6;
    head2->next = new_node;

    new_node = new Node();
    new_node->data = 9;
    head2->next->next = new_node;

    new_node = new Node();
    new_node->data = 15;
    head1->next = new_node;
    head2->next->next->next = new_node;

    new_node = new Node();
    new_node->data = 30;
    head1->next->next = new_node;

    head1->next->next->next = NULL;

    traverse(head1);
    traverse(head2);

    while (head1!= NULL){
        if (head1->flag == 2){
            cout << "Intersection node is: " << head1->data << endl;
            break;
        }
        head1 = head1->next;
    }

    return 0;
}