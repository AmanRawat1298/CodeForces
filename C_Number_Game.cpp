#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main()
{   
    int t;
    cin>>t;
    while(t--)
	{
        int n;
        cin>>n;
        if(n==1)
            cout<<"FastestFinder\n";
        else if(n==2)
            cout<<"Ashishgup\n";
        else
        {
            if(n%2==0)
            {
                
                if( gcd(n, n/2)%2 == 0)
                    cout<<"Ashishgup\n";
                else
                    cout<<"FastestFinger\n";   
            }
            else
            {
                cout<<"Ashishgup\n";
            }

        }
    }
    return 0;
}