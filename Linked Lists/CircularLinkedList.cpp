#include<bits/stdc++.h>
using namespace std;

class Circular {
    public:
        int data;
        Circular *next;
};

// function to print all nodes in a given circular linked list
void printNode(Circular *node) {
    Circular *temp = node;
    if(temp != NULL) {
        do {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        while (temp != node);
    }
}

// function to insert nodes at the beginning of a circular linked list
void insert(Circular **head_ref, int data) {
    Circular *node = new Circular(); // new node creation
    Circular *temp_node = *head_ref; // assigning passed node param to temp variable

    node -> data = data; // linking node to data parameter
    node -> next = *head_ref; // linking node.next to head parameter

    // if linked list is not NULL
    // set the next last node
    if (*head_ref != NULL) {
        while (temp_node -> next != *head_ref)
            temp_node = temp_node -> next;
        temp_node -> next = node;
    }
    else
        node -> next = node; // for the first node
    *head_ref = node;
}

int main() {
    Circular *head = NULL;

    insert(&head, 12);
    insert(&head, 45);
    insert(&head, 2);
    insert(&head, 13);
    insert(&head, 11);

    cout << "Contents in Circular list:\n";
    printNode(head);

    return 0;
}