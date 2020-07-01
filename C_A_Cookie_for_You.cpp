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
		ll v,c,a,b;
        cin>>v>>c>>a>>b;
        if(v+c < a+b)
            cout<<"No\n";
        else
        {
            if(b<=min(v,c))
            {   
                cout<<"Yes\n";
            }   
            else
            {
                cout<<"No\n";
            }
              
        }
        
        
        
	}
    return 0;
}