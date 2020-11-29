#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        
        long long  sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        if(n==1)
        {
            cout<<a[0]<<endl;
            continue;
        }    
        sum = a[0];
        for(int i=1; i<n; i++)
        {
            if(sum>=i)
            {
                sum += a[i];
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}