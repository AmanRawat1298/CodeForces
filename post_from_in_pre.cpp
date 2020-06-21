// C++ program to print Postorder 
// traversal from given Inorder 
// and Preorder traversals. 
#include <iostream> 
using namespace std; 

int preIndex = 0; 

int search(int arr[], int startIn,int endIn, int data) 
{ 
	int i = 0; 
	for (i = startIn; i < endIn; i++) 
	{ 
		if (arr[i] == data) 
		{ 
			return i; 
		} 
	} 
	return i; 
} 
void printPost(int arr[], int pre[],int inStrt, int inEnd) 
{ 
    if(inStrt<=inEnd)
    {
        int index_root  = search(arr, inStrt, inEnd, pre[preIndex]);
        preIndex++;

        printPost(arr, pre ,inStrt, index_root-1);
        printPost(arr, pre ,index_root+1, inEnd);
        cout<<arr[index_root]<<" ";
    }
} 

// Driver code 
int main() 
{ 
	int arr[] = {4, 2, 5, 1, 3, 6}; 
	int pre[] = {1, 2, 4, 5, 3, 6}; 
	int len = sizeof(arr)/sizeof(arr[0]); 
	printPost(arr, pre, 0, len - 1); 
} 

// This code is contributed by SHUBHAMSINGH10 
