#include<iostream>
using namespace std;

/** The partition function
* helps in sorting the elements 
** of a given array divided
* into two by a pivot
**/
int Partition(int A[], int low, int high)
{
	int temp, v; // This are just elements used in swapping of A[i] $ A[j] array
	int pivot = A[high];
	int i = (low-1);
	
	for(int j = low; j <= high-1; j++)
	{
		if(A[j] <= pivot)
		{
			i++;
			temp = A[i];
			A[i] = A[j]; // we can use swap($A[i], $A[j])
			A[j] = temp;
		}
	}
	v = A[i +1];
	A[i+1] = A[high];
	A[high] = v;
	
	return (i + 1);
}

// the sorting algorithm
int QuickSort(int A[], int low, int high)
{
	if(low < high)
	{
		int p = Partition(A, low, high);
		QuickSort(A, low, p-1);
		QuickSort(A, p+1, high);
	}
}

int QuickCall()
{
	int i, n;
	int A[50]; // any array element needs a size definition
	
	cout<<"Enter number of array elements: ";
	cin>>n; // This is the number of array elements
	cout<<"\nEnter array elements: ";
	
	for(i=0; i<n; i++)
	{
		cin>>A[i]; // The last cout will only work only and only if i < no. of array
	}
	QuickSort(A, 0, n-1);
	
	for(i=0; i<n; i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}

// the main function
int main()
{
	cout<<"Welcome to QuickSort array, the fastest array sort method. Enjoy!!\n";
	QuickCall();
	bool run;
	// while loop for continuity
	run = false;
	while(run = true)
	{
		int option;
		cout<<"\n";
		cout<<"\nPress 1 to continue and 2 to exit: ";
		cin>> option;
		if(option == 1)
		{
			cout<<"\n";
			QuickCall();
		}
		else(option == 2);
		{
			cout<<"System exiting...\n";
			cout<<"System exited!"<<"\n";
			exit(1); // closes the active editor and exits it
		}
	}
}
