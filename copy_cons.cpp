#include <iostream>
using namespace std;

class Person
{
    int* no;
    public:
    
    Person()
    {
        cout<<"Default";
        no = new int();
    }
    
    Person(int *x)
    {
        no = new int();
        *no = *x;
    }

    Person ( const  Person& obj)
    {
        int x = 999;
        obj.no = &x;
        *no = *(obj.no);
    }

    void display()
    {
        cout<<"no: "<<*no;
    }

    void change(int y)
    {   
        *no = y;
    }
    
};

int  main()
{
    
    int s = 100;
    Person aman(&s);

    // aman.display();
    // s = 10;
    // aman.display();
    
    // aman.change(99);
    // aman.display();

    Person anjali = aman;
    anjali.display();

    // aman.change(1000);
    aman.display();

    anjali.display();

    return 0;
}
 