// C++ program to populate inorder 
// traversal of all nodes 
#include<bits/stdc++.h> 
using namespace std; 

class node 
{ 
	public: 
	int data; 
	node *left; 
	node *right; 
	node *next; 
}; 

/* Set next of p and all descendents of p 
by traversing them in reverse Inorder */
// void populateNext(node* p) 
// { 
// 	// The first visited node will be the 
// 	// rightmost node next of the rightmost 
// 	// node will be NULL 
// 	static node *next = NULL; 

// 	if (p) 
// 	{ 
// 		// First set the next pointer 
// 		// in right subtree 
// 		populateNext(p->right); 

// 		// Set the next as previously visited 
// 		// node in reverse Inorder 
// 		p->next = next; 

// 		// Change the prev for subsequent node 
// 		next = p; 

// 		// Finally, set the next pointer in 
// 		// left subtree 
// 		populateNext(p->left); 
// 	} 
// } 

/* UTILITY FUNCTIONS */
/* Helper function that allocates a new 
node with the given data and NULL left 
and right pointers. */
node* newnode(int data) 
{ 
	node* Node = new node(); 
	Node->data = data; 
	Node->left = NULL; 
	Node->right = NULL; 
	Node->next = NULL; 

	return(Node); 
} 

void print_inorder(node* root)
{
	
	if(!root)
      return;
  	
  	print_inorder(root->left);
    if(root->next)
      cout<<root->next->data<<" ";
  	else
      cout<<"-1 ";
    print_inorder(root->right);
}

/* Set next of all descendents of p by  
traversing them in reverse Inorder */
void populateNextRecur(node* p, node **next_ref)  
{  
    if (p)  
    {  
        // First set the next pointer in right subtree  
        populateNextRecur(p->right, next_ref);  
  
        // Set the next as previously visited 
        // node in reverse Inorder  
        p->next = *next_ref;  
  
        // Change the prev for subsequent node  
        *next_ref = p;  
  
        // Finally, set the next pointer in right subtree  
        populateNextRecur(p->left, next_ref);  
    }  
}  

void populateNext(node *root)  
{  
    // The first visited node will be the rightmost node  
    // next of the rightmost node will be NULL  
    node *next = NULL;  
  
    // populateNextRecur(root, &next);  
    populateNextRecur(root, &next);  
}  
  



// Driver Code 
int main() 
{ 

	/* Constructed binary tree is 
			10 
			/ \ 
		8 12 
		/ 
	3 
	*/
	node *root = newnode(10); 
	root->left = newnode(8); 
	root->right = newnode(12); 
	root->left->left = newnode(3); 

	// Populates nextRight pointer in all nodes 
	populateNext(root); 

	// Let us see the populated values 
	node *ptr = root->left->left; 
	while(ptr) 
	{ 
		// -1 is printed if there is no successor 
		cout << "Next of " << ptr->data << " is "
			<< (ptr->next? ptr->next->data: -1) 
			<< endl; 
		ptr = ptr->next; 
	} 
  
  	print_inorder(root);

	return 0; 
} 

// This code is contributed by rathbhupendra 
