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
		ll x,y,n;
        cin>>x>>y>>n;
        if(n%x == y)
        {
            cout<<n<<endl;
        }   
        else if(n%x > y)
        {
            cout<<n/x*x+y<<endl;
        }
        else
        {
            // cout<<n/x*x-y + n%x<<endl;
            cout<<n - n%x - x + y<<endl;
        }
        

    }
    return 0;
}