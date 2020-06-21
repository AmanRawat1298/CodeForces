// C++ program to print Postorder 
// traversal from given Inorder 
// and Preorder traversals. 
#include <iostream> 
#include<bits/stdc++.h>
using namespace std; 

// void printPost_main(int arr[], int pre[],int n);
// void printPost(int arr[], int pre[], int inStrt, int inEnd,map<int, int> hm);


int preIndex = 0; 


void printPost(int arr[], int pre[],int inStrt, int inEnd, map<int,int> hm) 
{ 
    if(inStrt<=inEnd)
    {
        int index_root  = hm[pre[preIndex]];
        preIndex++;

        printPost(arr, pre ,inStrt, index_root-1, hm);
        printPost(arr, pre ,index_root+1, inEnd, hm);
        cout<<arr[index_root]<<" ";
    }
}


void printPost_main(int arr[], int pre[],int n)
{
    map<int,int> hm;
    for(int i=0; i<n; i++)
        hm[arr[i]] = i;
    printPost(arr, pre, 0, n-1, hm);
} 


// Driver code 
int main() 
{ 
	int arr[] = {4, 2, 5, 1, 3, 6}; 
	int pre[] = {1, 2, 4, 5, 3, 6}; 
	int len = sizeof(arr)/sizeof(arr[0]); 
	printPost_main(arr, pre, len);
} 

// This code is contributed by SHUBHAMSINGH10 
