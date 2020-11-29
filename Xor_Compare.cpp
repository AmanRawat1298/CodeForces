#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,n,count=0;
        cin>>x>>y>>n;
        for(int i=0; i<=n; i++)
        {
            if( (x^i)<(y^i))
                count++;
        }
        cout<<count<<endl;

    }
    return 0;
}