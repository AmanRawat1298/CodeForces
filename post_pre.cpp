// C++ program for finding postorder 
// traversal of BST from preorder traversal 
#include <bits/stdc++.h> 
using namespace std; 

// Function to find postorder traversal from 
// preorder traversal. 
void findPostOrderUtil(int pre[], int n, int minval, 
					int maxval, int& preIndex) 
{ 
    if(preIndex == n)
        return;
    
    if(pre[preIndex] > maxval || pre[preIndex] < minval)
        return;

    int val = pre[preIndex];
    preIndex++;
    
    findPostOrderUtil(pre, n, minval, val-1, preIndex);
    
    findPostOrderUtil(pre, n, val+1, maxval, preIndex);
     cout<<val<<" ";
    

	
} 

// Function to find postorder traversal. 
void findPostOrder(int pre[], int n) 
{ 

	// To store index of element to be 
	// traversed next in preorder array. 
	// This is passed by reference to 
	// utility function. 
	int preIndex = 0; 

	findPostOrderUtil(pre, n, INT_MIN, INT_MAX, preIndex); 
} 

// Driver code 
int main() 
{ 
	int pre[] = { 40, 30, 35, 80, 100 }; 

	int n = sizeof(pre) / sizeof(pre[0]); 

	// Calling function 
	findPostOrder(pre, n); 
	return 0; 
} 
