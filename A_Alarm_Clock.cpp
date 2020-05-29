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
		ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a<=b)
        {
                cout<<b<<"\n";
        }
        else
        {
            if(c<=d)
            {
                    cout<<"-1\n";
            }
            else
            {   
                ll count =0; 
                a = a-b;
                
                if(a%(c-d) != 0)
                    count++;
                count += a/(c-d);
                cout<<b+count*c<<"\n";
            }
            
        }
        
	}
    return 0;
}