#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node* prev;
};

void PrintList(Node* n) {
    while(n != NULL) {
        cout << n -> data << " ";
        n = n -> next; // backward traversal
    }
}

int main() {
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head -> data = 1;
    head -> next = second;
    head -> prev = NULL;

    second -> data = 2;
    second -> next = third;
    second -> prev = head;

    third -> data = 3;
    third -> next = NULL;
    third -> prev = second;

    PrintList(head);
}