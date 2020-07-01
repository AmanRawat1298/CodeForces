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
        if(n==6)
        {
            cout<<"is 6 "<<1<<endl;
        }
        else if(n==1)
            cout<<0<<endl;
        else
        {
            int count =0 ;
            while(n>=6)
            {
                n/=6;
                count++;
            }
            if(n==1)
                cout<<count<<endl;
            else if(n == 3)
            {
                   cout<<"ANS"<<count+2<<endl;
            }
            else
            {
                cout<<"-1\n"; 
            }
        }
        
    }
    return 0;
}