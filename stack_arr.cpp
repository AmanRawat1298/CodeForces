#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX 100
// struct Node
// {

//     int data;
//     Node* next;
//     Node(int x)
//     {
//         data = x;
//         next = NULL;
//     }
// };


class ll
{
    int head;
    int *arr;
    public:
    ll()
    {
        arr = new int[MAX];
        head = -1;
        int capacity = MAX;
    }

    void insert(int val)
    {
       
        if(head>MAX-1)
        {    
            cout<<"\nOverflow";    
        }
        else
        {
            head++;
            arr[head] = val;
        }

    }

    void remove()
    {
        if(head<0)
        {
            cout<<"\nUnderflow";
        }
        else
        {
            head--;
        }
    }

    void show()
    {
        int i = 0;
        while(i<=head)
        {
            cout<<arr[i++]<<"->";
            
        }
        cout<<endl;
    }

    void peek()
    {
        if(head<0)
        {
            cout<<"\nUnderflow";
        }
        else
        {
            cout<<arr[head]<<endl;
        }
        
    }
    
    ~ll()
    {
        free(arr);
    }


};


int main()
{
    ll m;
    m.insert(1);
    m.insert(2);
    m.show();
    m.remove();
    m.insert(3);
    m.insert(4);
    m.show();
    m.remove();
    m.insert(5);
    m.insert(6);
    m.show();
    m.remove();
    m.remove();
    m.remove();
    m.remove();
    m.remove();
     m.insert(1);
    m.insert(2);
    m.show();
    m.remove();
    m.insert(3);
    m.insert(4);
    m.show();
    m.peek();


    return 0;
}