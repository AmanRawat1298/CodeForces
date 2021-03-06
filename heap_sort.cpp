// C++ program for implementation of Heap Sort 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 

// To heapify a subtree rooted with node i which is 
// an index in arr[]. n is size of heap 
void heapify(int arr[], int n, int i) 
{ 
	int largest = i ;
    int left = 2*i +1;
    int right = 2*i +2;

    if(left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    if(right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if(largest != i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
} 


// main function to do heap sort 
void heapSort(int arr[], int n) 
{ 
	for(int i= n/2-1; i>=0 ; i--)
        heapify(arr, n, i);
    

    for(int i= n-1; i>0; i--)
    {
        swap(arr[i], arr[0]);
        heapify(arr, i, 0);

    }
} 

/* A utility function to print array of size n */
void printArray(int arr[], int n) 
{ 
	for (int i=0; i<n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 

// Driver program 
int main() 
{ 
	int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	heapSort(arr, n); 

	cout << "Sorted array is \n"; 
	printArray(arr, n); 
} 
