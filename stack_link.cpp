#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node
{

    int data;
    Node* next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


class ll
{
    Node* head;
    public:
    ll()
    {
        head = NULL;
    }

    void insert(int val)
    {
        Node* temp = new Node(val);
        if(!head)
        {    
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }

    }

    void remove()
    {
        if(!head)
        {
            cout<<"\nUnderflow";
        }
        else
        {
            Node* temp = head;
            head = head->next;
            free(temp);
        }
    }

    void show()
    {
        Node* temp = head;
        while(temp)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }

    void peek()
    {
        if(!head)
        {
            cout<<"\nUnderflow";
        }
        else
        {
            cout<<head->data;
        }
        
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