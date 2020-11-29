#include <iostream>  
using namespace std;  
class Animal {  
    public:  
void eat(){    
cout<<"Eating...";    
    }      
};   
class Dog: public Animal    
{    
 public:  
 int eat()    
    {    
       cout<<"Eating bread..."; 
       return 1;   
    }    
};  
int main(void) {  
   Dog d = Dog();    
   d.eat();  
   return 0;  
}  