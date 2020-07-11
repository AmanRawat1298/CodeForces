#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int t;
    cin>>t;
    while(t--)
	{
		ll n;
        cin>>n;
        int a=1;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2;
        }
        else
        {
            for(int i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                        a=n/i; 
                        break;
                }
            }
            if(a==1)
                cout<<1<<" "<<n-1;
            else
            {
                cout<<a<<" "<<n-a;
            }
            
        }
        
        
        cout<<endl;
	}
    return 0;
}