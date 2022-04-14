// Implementation of Queues using arrays
#include<iostream>

using namespace std;
#define N 5
int queue[N];
int front = -1;
int rear = -1;

// the dequeue and enqueue functions
void enqueue(int x)
{
// inserting a new element takes up 1 parameter of value Integer
    if(rear == N-1)
    { // when all the element's indices are all taken up by the elements
        cout<<"Overflow encountered\n";
    }
    else if (front == -1 && rear == -1) // when no element has taken up any index value of the array
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
    	rear++;
        queue[rear] = x;
    }
}

void dequeue() // removal of an element occurs
{
    if(front == -1 && rear == -1)
    {
        cout<<"Underflow encountered\n";
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }    
}

void display() // prints out all the elements in that queue
{
    int i;
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
        for(i = front; i < rear+1; i++)
        {
        	cout<<"Elements in the Queue are: "<<queue[i]<<"\n";
        }
    }
}

void peek() // displays the first element in the sequential queue
{
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is empty\n";
    }
    else
    {
    	cout<<"Current element in the 1st position is: "<<queue[front]<<"\n";
    }
}


int main() {
	dequeue();
	enqueue(5);
	display();
	peek();
	enqueue(25);
	display();
    return 0;
}
