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
		ll n,r;
        cin>>n>>r;
        
        ll s = (r*(r+1))/2;
        if(n<=r)
        {
            n--;
            ll sn = (n*(n+1)/2);
            cout<<sn+1<<endl;
        }
        else
        {
            cout<<s<<endl;
        }
        
	}
    return 0;
}