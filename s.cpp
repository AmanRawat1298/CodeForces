#include <iostream>
using namespace std;

class item
{   
    
    int *cost;
    
    public:
    
    item(int val)
    {
        cost = new int;
        *cost = val;
    }

    //item obj = kurkure
    item(item* obj)
    {
        obj->cost = new int;
        cout<<"Copy cons called\n";
        *cost = *((obj)->cost);
    }

    void show()
    {
        cout<<"\ncost :"<<*cost;
    }

    void change(int v)
    {
        *cost = v;
    }
};

int main()
{
    item kurkure(10);
    // item chocolate(50);
    // chocolate = kurkure;    // wont invoke copy constructor

    item chocolate  = &kurkure;  //copy constructor   = 
    // chocolate.show();

    kurkure.change(100);
    kurkure.show();
    chocolate.show();



    return 0;
}


//kurkure.cost = chocolate.cost;