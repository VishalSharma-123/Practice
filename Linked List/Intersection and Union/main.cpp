#include <bits/stdc++.h>
using namespace std;

unordered_map<int,int> intersecting;

class Node{
    public:
        int data;
        Node *next;
};

Node *pushNode(Node *head_ref, int data_val){
    Node *new_node = new Node();
    new_node->data = data_val;
    new_node->next = head_ref;
    head_ref= new_node;

    return head_ref;
}

void printNode(Node *head){
    Node *temp = head;
    while (temp!= NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}


void intersection(Node *a, Node *b, unordered_map<int,int> intersection_set){
    Node *head1 = a;
    Node *head2 = b;
    
    while (head1!=NULL || head2 != NULL){
        if (head1!=NULL){
            intersection_set[head1->data] ++;
            head1 = head1->next;
        }

        if (head2!=NULL){
            intersection_set[head2->data] ++;
            head2 = head2->next;
        }
    }

    // for union
    cout << "UNION:\n";
    for (auto itr:intersection_set){
        cout << itr.first << " ";
    }
    cout << endl;

    cout << "INTERSECTION:\n";
    for (auto itr:intersection_set){
        if (itr.second == 2){
            cout << itr.first << " ";
        }
    }
    cout << endl;
}



int main() {

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *u;

    head1 = pushNode(head1, 1);
    head1 = pushNode(head1, 2);
    head1 = pushNode(head1, 3);
    head1 = pushNode(head1, 4);
    head1 = pushNode(head1, 5);
    cout << "First List:\n";
    printNode(head1);

    head2 = pushNode(head2, 1);
    head2 = pushNode(head2, 3);
    head2 = pushNode(head2, 5);
    head2 = pushNode(head2, 6);
    cout << "Second List:\n";
    printNode(head2);

    intersection(head1, head2, intersecting);

    return 0;
}

