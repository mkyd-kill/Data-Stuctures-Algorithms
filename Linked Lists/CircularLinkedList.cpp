#include<bits/stdc++.h>
using namespace std;

class Circular {
    public:
        int data;
        Circular *next;
};

void printNode(Circular *node) {
    Circular *temp = node;
    if(temp != NULL) {
        do {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        while (temp != node)
    }
}

int main() {

}