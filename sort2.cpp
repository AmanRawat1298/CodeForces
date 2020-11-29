#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print_array(int *a, int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void bubble(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        bool flag = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(flag == false)
        {
            cout<<"sorted after "<<i;
            break;
        }
        print_array(arr, n);
    }
    
}


void selection(int *arr, int n)
{

    for(int i=0; i<n-1; i++)
    {
        int index=i;
        for(int j=i; j<n; j++)
        {
            index = arr[index]>arr[j]?j:index;
        }
        swap(arr[i], arr[index]);
    }
    print_array(arr, n);
}

void insertion(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    print_array(arr,n);

}

void merge_(int *arr, int l, int mid, int r)
{
    int n1 = mid-l+1,n2=r-mid;

    int A[n1],B[n2];
    
    int i=0,j=0,k=0;
    
    for(i=0; i<n1; i++)
    {
        A[k++] = arr[l+i];
    }
    
    k=0;
    
    for(i=0; i<n2; i++)
    {
        B[k++] = arr[mid+1+i];
    }

    i=j=0;k=l;
    
    while( i<n1 && j<n2 )
    {
        if(A[i] < B[j])
        {
            arr[k++] = A[i++];
        }
        else
        {
            arr[k++] = B[j++];
        }
    }

    while(i<n1)
    {   
        arr[k++] = A[i++];
    }

    while(j<n2)
    {   
        arr[k++] = B[j++];
    }

}


void mergesort(int* arr, int i, int j)
{
    if(i<j)
    {
        int mid = (i+j)/2;
        mergesort(arr,i, mid);
        mergesort(arr, mid+1, j);
        merge_(arr, i, mid, j);
    }
}

void merge_sort(int arr[], int n)
{
    mergesort(arr, 0, n-1);
    print_array(arr,n);
}


int partition(int *arr, int l, int r)
{
    int key  = arr[r];
    int j = l-1;
    for(int i=l;i<r;i++)
    {
        if(arr[i]<key)
        {
            j++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[++j], arr[r]);
    return j;
}

void quicksort(int* arr, int l, int r)
{
    if(l<r)
    {
        int p = partition(arr, l, r);
        quicksort(arr, l, p-1);
        quicksort(arr, p+1, r);

    }
}

void quick_sort(int* arr, int n)
{
    quicksort(arr, 0, n-1);
    print_array(arr, n);
}

int main()
{
    int arr[] = {9,8,7,6,5,4,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    bubble(arr,n);
    // selection(arr, n);
    // insertion(arr, n);

    // merge_sort(arr, n);
    // quick_sort(arr, n);

    print_array(arr,n);

    return 0;
}