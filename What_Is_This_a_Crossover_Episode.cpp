#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int findRoots(int a, int b, int c) 
{ 
     // If a is 0, then equation is not quadratic, but 
     // linear 
    //  if (a == 0) 
    //  { 
    //     cout << "Invalid"; 
    //     return; 
    //  } 
  
     int d  = b*b - 4*a*c; 
     double sqrt_val = sqrt(abs(d)); 
  
     if (d > 0) 
     { 
        //  cout << "Roots are real and different \n"; 
        //  cout << (double)(-b + sqrt_val)/(2*a) << "\n"
        //       << (double)(-b - sqrt_val)/(2*a); 
        if (ceil(  max((double)(-b + sqrt_val)/(2*a), (double)(-b - sqrt_val)/(2*a)) ) - (  max((double)(-b + sqrt_val)/(2*a), (double)(-b - sqrt_val)/(2*a)) >= 0.5))
            return ceil(  max((double)(-b + sqrt_val)/(2*a), (double)(-b - sqrt_val)/(2*a)) );
        return (  max((double)(-b + sqrt_val)/(2*a), (double)(-b - sqrt_val)/(2*a)) );
     } 
     else  
     { 
        //  cout << "Roots are real and same \n"; 
        //  cout << -(double)b / (2*a); 
        return ceil( -1*(double)b / (2*a));
         
     } 
    
    
    
    //  else // d < 0 
    //  { 
    //     //  cout << "Roots are complex \n"; 
    //     //  cout << -(double)b / (2*a) << " + i" << sqrt_val 
    //         //   << "\n"  << -(double)b / (2*a) << " - i"
    //         //   << sqrt_val; 
    //     return max(-(double)b / (2*a), );
    //  } 
} 
int main()
{   
    int t;
    cin>>t;
    while(t--)
	{
		int n;
        cin>>n;

        int a=1,b=-1;
        int c = -2*(n+1);
        cout<<"c: "<<c;
        int res = findRoots(a,b,c);
        int ch = 97;
        cout<<res<<endl;
        for(int i=0; i<res; i++)
        {
            cout<<(char)ch++;
            // cout<<i;
        }
        cout<<endl;
	}
    return 0;
}