#include<iostream>
using namespace std;

template<typename T>
struct SinglyLinked {
    T node;
    struct SinglyLinked * prev;
    struct SinglyLinked * next;
};

int main() {
    SinglyLinked<int> link;
    link.node = 5;
    link.prev;
    link.next;
}