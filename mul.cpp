#include <iostream>  
using namespace std;  
class Animal {  
    public:  
    int eat()    
    {    
       cout<<"Eating bread..."; 
       return 1;   
    }      
};   
class Dog: public Animal    
{    
 public:  

void eat(){    
cout<<"Eating...";    
    }    
 
};  
int main(void) {  
//    Dog *d = new Dog(); 
    // Animal *d = new Dog();
//    d->eat();
Dog d;
d.eat();  
   return 0;  
}  