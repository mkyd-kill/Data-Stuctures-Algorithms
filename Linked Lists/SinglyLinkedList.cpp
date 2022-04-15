#include<bits/stdc++.h> // header file including every standard library in the program
using namespace std;

/** 
 * Single Linked List
 * Has a node (head)  where the head is liked via a pointer
 **/


// using class
class Node {
    public:
        int data;
        Node* next;
};

// After creating nodes, we must be able to print out its contents
// This function prints all the contents starting with the first one
void PrintList(Node* n) {
    // if n is not empty
    while(n != NULL) {
        cout << n -> data << " ";
        n = n -> next;
    }
}


int main() {
    // using the class node to create a linked list
    // with 3 nodes
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    // allocating nodes in the heap dynamically
    head = new Node();
    second = new Node();
    third = new Node();

    // assigning values
    // assigning to the first node
    head -> data = 1;
    head -> next = second; // linking the first node to the second

    // assigning to the second node
    second -> data = 2;
    second -> next = third; // linking the second node to the third

    // assigning to the third node
    third -> data = 3;
    third -> next = NULL;

    /**
     * We have the linked list ready.
 
        head    
            |
            |
        +---+---+     +---+---+     +----+------+
        | 1 | o----->| 2 | o-----> | 3 | NULL |
        +---+---+     +---+---+     +----+------+ 
     * 
     */

    // printing all contents in the linked nodes
    PrintList(head);

    return 0;
}