#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class Nodeoperation{
    public:
        void pushNode(class Node **head_ref, int data_val){

            class Node *new_node = new Node();
            new_node->data = data_val;
            new_node->next = *head_ref;
            *head_ref = new_node;
        }

        void printNode(class Node *head){
            while (head!= NULL){
                cout << head->data << "->";
                head = head->next;
            }
            cout << "NULL" << endl;
        }
// normal method
        int length(Node *head, int n){
            int count = 0;
            while (head!= NULL){
                count+=1;
                head = head->next;
            }

            count = count - n;
            return count;
        }

        void nth_node(Node *head, int n){
            int i =0;
            if (n<0){
                cout << -1 << endl;
            }
            else{
                while (i<n && head!=NULL){
                head = head->next;
                i++;
                }

                cout << head->data << endl;
            }
        }

        void new_method(Node *head, int n){
            Node *main = head;
            Node *ref = head;

            for (int i =0; i<n; i++){
                ref = ref->next;
            }

            while (ref != NULL){
                ref = ref->next;
                main = main->next;
            }

            cout << main->data << endl;
        }
};

int main() {
    class Node*head = NULL;
    class Nodeoperation *temp = new Nodeoperation();
    for (int i =1; i<10; i++){
        temp ->pushNode(&head, 10-i);
    }

    temp->printNode(head);
    int count;
    count = temp->length(head, 2);
    // temp->nth_node(head, count);
    temp ->new_method(head, 2);
    return 0;
}

