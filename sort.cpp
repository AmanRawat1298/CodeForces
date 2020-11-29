#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print_array(int *arr, int n)
{
    cout<<endl;
    for(int i=0; i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void insert_sort(int *arr, int n)
{

    int key,j;
    for(int i=1; i<n; i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    print_array(arr, n);
}
void sel_sort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        int index = i;//, min_val = arr[i];
        for(int j=i; j<n; j++)
        {  
            if(arr[index] > arr[j])
            {
                index = j;

            }          
        }
        swap(arr[index], arr[i]);
    }
    print_array(arr,n);
}
void bubble_sort(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n-i; j++)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j], arr[j-1]);
            }
        }
    }
    print_array(arr,n);
    
}
void merge(int *arr, int l, int mid, int r)
{
    int i,j,k=0;
    int A[mid-l+1], B[r-mid];
    for(i=0; i<mid-l+1; i++)
    {
        A[i] = arr[l+i];
    }
    for(i=mid+1; i<=r; i++)
    {
        B[k++] = arr[i];
    }

    i=0,j=0,k=l;
    while(i<mid-l+1 && j < r-mid)
    {
        if(A[i] <= B[j])
        {
            arr[k++] = A[i++];
        }
        else
        {
            arr[k++] = B[j++];
        }
    }

    while(i < mid - l +1)
    {
        arr[k++] = A[i++];
    }
    while(j < r-mid)
    {
        arr[k++] = B[j++];
    }
}
void merge_sort_(int* arr, int l, int r)
{
    if(l<r)
    {
        int mid = l + (r-l)/2;

        merge_sort_(arr, l, mid);
        merge_sort_(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}
void merge_sort(int* arr, int n)
{
    merge_sort_(arr, 0 , n-1);
}
int partition(int *arr,int l ,int r)
{
    int key = arr[r];
    int i=l-1,j;//, j = r-2;
    for(j=l; j<r; j++)
    {   
        if(arr[j] < key)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[++i], arr[r]);
    return i;
}
void quick_sort_(int *arr, int l, int r)
{
    if(l<r)
    {
        int p = partition(arr, l, r);
        quick_sort_(arr, l, p-1);
        quick_sort_(arr, p+1, r);
    }
}

void quick_sort(int* arr, int n)
{
    quick_sort_(arr, 0, n-1);
}

int main()
{
    int arr[]  = {9,8,7,6,5,4,3,2,1};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before  :";
    print_array(arr, n);
    // bubble_sort(arr,n);
    // sel_sort(arr, n );
    // insert_sort(arr, n);
    // merge_sort(arr, n);
    quick_sort(arr, n);
    cout<<"\nAfter :";
    print_array(arr, n);


    // string s;
    // cin>>s;
    // // reverse(s.begin(), s.end());
    // int i=0,  j=s.size()-1;
    // while(i<j)
    // {
    //     swap(s[i++], s[j--]);
        
    // }

    // cout<<s;

    return 0;
}