#include<iostream>
#include<cstring>
using namespace std;

int OrderedSearch(string A[], int n, string data)
{
    for(int i = 0; i < n; i++)
    {
        if(A[i] == data)
        {
            cout<<data<<"\tFound in position: \t"<<i;
            break;
        }
        else
        {
        	cout<<"Does not exist";
        	break;
		}
    }
}

int main()
{
    string A[3] = {"Kevoh", "John", "Chapati"};

    // function call
    OrderedSearch(A, 10, "John");
    return 0;
}
