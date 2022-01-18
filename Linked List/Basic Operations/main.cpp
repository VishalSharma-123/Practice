#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class Nodeoperation{
    public:
        void push(Node **head_ref, int data_val){                       //creating a new linked list
            Node *new_node = new Node();                                //create a new node
            new_node->data = data_val;                                  //add the data in that pointer
            new_node->next = *head_ref;                                 //make next of new node as the head
            *head_ref = new_node;                                       //move the head to point to new node
        }

        void insert(Node *prev_node, int data_val){                     //insert data inbetween
            Node *new_node = new Node();                                //creating a new node
            new_node ->data = data_val;                                 //add data to that pointer
            new_node->next = prev_node->next;                           //make the pointer to new node to point towards new node
            prev_node->next = new_node;                                 //previous node links to the new node assign
        }

        void append(Node **head_ref, int data_val){                     //insert at last location
            Node *new_node = new Node();                                //creating a new node
            Node *last = *head_ref;                                     //starting from the head pointer
            new_node->data = data_val;                                  //assigning the data to that new node
            new_node->next = NULL;                                      //NULL will be assigned to this new node

            if (head_ref == NULL){                                      //if list is empty
                *head_ref = new_node;
                return;
            }

            while (last->next != NULL){                                 //loop till it is one step before NULL
                last = last->next;
            }
            last->next = new_node;                                      //assign it to the new node
            return;
        }

        void delete_node(Node **head_ref, int key){                     //function to delete
            Node *temp = *head_ref;                                     //head node
            Node *prev = NULL;                                          //previous node

            if (temp != NULL && temp->data == key){                     //if head node is the key
                *head_ref = temp->next;                                 //make new head 
                delete temp;
                return;
            }

            while (temp!=NULL && temp->data != key){                    //loop till list end or key is found
                prev= temp;
                temp = temp->next;
            }

            if (temp==NULL){    
                cout << "Not in the list";
                return;
            }

            prev->next = temp->next;                                    //unlink the node
            delete temp;                                                //free the space
        }

        void printNode(Node *head){
            while (head!= NULL){
                cout << head->data << "->";
                head = head->next;
            }
            cout << "NULL\n";
        }


};

int main() {
    class Node*head = NULL;
    class Nodeoperation *temp = new Nodeoperation();

    for (int i = 0; i<1; i++){
        temp -> push(&head, i);
    }

    for (int i = 1; i<16; i++){
        temp -> append(&head, i);
    }

    temp-> printNode(head);

    temp->delete_node(&head, 4);
    temp-> printNode(head);

    return 0;
}