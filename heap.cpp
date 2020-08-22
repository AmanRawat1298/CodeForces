#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class MinHeap
{
    int *harr;
    int capacity;
    int heap_size;
    
    public:

    MinHeap(int capacity); 
  
    // to heapify a subtree with the root at given index 
    void MinHeapify(int i); 
  
    int parent(int i) { return (i-1)/2; } 
  
    // to get index of left child of node at index i 
    int left(int i) { return (2*i + 1); } 
  
    // to get index of right child of node at index i 
    int right(int i) { return (2*i + 2); } 
  
    // to extract the root which is the minimum element 
    int extractMin(); 
  
    // Decreases key value of key at index i to new_val 
    void decreaseKey(int i, int new_val); 
  
    // Returns the minimum key (key at root) from min heap 
    int getMin() { return harr[0]; } 
  
    // Deletes a key stored at index i 
    void deleteKey(int i); 
  
    // Inserts a new key 'k' 
    void insertKey(int k); 

    void show();


};


MinHeap :: MinHeap(int cap)
{
    heap_size = 0;
    capacity = cap;
    harr = new int[cap];
}

void MinHeap::insertKey(int k) 
{ 
	if (heap_size == capacity) 
	{ 
		cout << "\nOverflow: Could not insertKey\n"; 
		return; 
	} 

	// First insert the new key at the end 
	heap_size++; 
	int i = heap_size - 1; 
	harr[i] = k; 

	// Fix the min heap property if it is violated 
	while (i != 0 && harr[parent(i)] > harr[i]) 
	{ 
        swap(harr[i], harr[parent(i)]); 
        i = parent(i); 
	} 

} 

void MinHeap::MinHeapify(int i) 
{ 
	int l = left(i); 
	int r = right(i); 
	int smallest = i; 
	if (l < heap_size && harr[l] < harr[i]) 
		smallest = l; 
	if (r < heap_size && harr[r] < harr[smallest]) 
		smallest = r; 
	if (smallest != i) 
	{ 
		swap(harr[i], harr[smallest]); 
		MinHeapify(smallest); 
	} 
} 
int MinHeap::extractMin() 
{ 
	if (heap_size <= 0) 
		return INT_MAX; 
	if (heap_size == 1) 
	{ 
		heap_size--; 
		return harr[0]; 
	} 

	// Store the minimum value, and remove it from heap 
	int root = harr[0]; 
	harr[0] = harr[heap_size-1]; 
	heap_size--; 
	MinHeapify(0); 

	return root; 
} 

void MinHeap::decreaseKey(int i, int new_val) 
{ 
	harr[i] = new_val; 
	while (i != 0 && harr[parent(i)] > harr[i]) 
	{ 
	swap(harr[i], harr[parent(i)]); 
	i = parent(i); 
	} 
} 
void MinHeap::deleteKey(int i) 
{ 
	decreaseKey(i, INT_MIN); 
	extractMin(); 
} 

void MinHeap :: show()
{
    cout<<endl<<"har : ";
    for(int i=0; i< heap_size; i++)
        cout<<harr[i]<<" ";
    cout<<endl;
}

int main()
{   

    MinHeap h(11); 
    h.insertKey(3); 
    h.insertKey(2); 
    // h.deleteKey(1); 
    h.insertKey(15); 
    h.insertKey(5); 
    h.insertKey(4); 
    h.insertKey(45); 
    h.show();
    cout <<"\nExtract Min: "<<h.extractMin() << " "; 
    cout <<"\nGETMIN: "<< h.getMin() << " "; 
    h.decreaseKey(2, 1); 
    cout <<"\nAfter dec (2,1): "<<h.getMin(); 

    h.show();

    return 1;
}