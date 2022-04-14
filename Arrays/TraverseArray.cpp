#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string names[5] {"Romeo", "Juliet", "John",  "Luciana", "Mary"};
    int marks[5] {50, 60, 80, 90, 98};
    string subject[5] = {"Maths", "Science", "Accounting", "Statistics", "Programming"};

    for(int i = 0; i < 5; i++)
    {
        cout<<names[i]<<"\t"<<marks[i]<<" marks"<<"\t==>\t"<<subject[i];
    }
}