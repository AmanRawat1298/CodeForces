#include <iostream> 
using namespace std; 

class Base { 
public: 
	Base()
	{
		cout<<"Constructor Base";
	}
	virtual void show() 
	{ 
		cout << " In Base \n"; 
	} 
	virtual void nice()=0;

}; 

class Derived : public Base { 
public: 
	Derived()
	{
		cout<<"Constructor Derived";
	}
	void show() 
	{ 
		cout << "In Derived \n"; 
		// return 1;
	} 
	void nice()
	{
		cout<<"nice";
	}
}; 
// class A:public Derived
// {
// 	public:
// 		void nice()
// 		{
// 			cout<<"in nice";
// 		}
// };

int main(void) 
{ 
	Base* bp = new Derived(); 
	// Derived d;
	// Base* bp = &d;
	// RUN-TIME POLYMORPHISM 
	// Derived bp;
	bp->show();
	// bp->nice(); 
	// bp.show();

	return 0; 
} 
