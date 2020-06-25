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
        ll a, b,c;
        cin>>a>>b>>c;
       if(a<c)
        {
            cout<<1<<" "; 
        }
        else {
            cout<<-1<<" ";
        }

        if(a*b*1LL>c)
        {
            cout<<b<<endl;
        }
        else{
            cout<<-1<<endl;
        }

	}
    return 0;
}