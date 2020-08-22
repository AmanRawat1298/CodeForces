#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,k;
        cin>>a>>k;
       
        if( k >= a)
        {
            cout<<abs(k-a);
        }
        else
        {
            if((a-k)%2 == 0 && a > 1) //even
            {
                cout<<0;
            }
            else   //odd
            {
                cout<<1;
            }
            
        }
        cout<<endl;
    }
}