#include <iostream>
using namespace std;


void swap(int *b, int* a)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}


void swap(int &a, int& b)
{
    int temp = a;
    a = b;
    b=temp;
}

void display()
{
    cout<<"Normal";
}

int main()
{
    int a=10, b=20;
    cout<<"Initially :\t"<<a<<" : "<<b;
    swap(&a, &b);
    cout<<"\ncall by pointer "<<a<<" : "<<b;

    swap(a,b);
    cout<<"\ncall by ref  \t"<<a<<" : "<<b<<endl;
    
    display();



    return 0;
}