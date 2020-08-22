#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;

        int d[n];

        for(int i=0; i<n; i++)
            cin>>d[i];


        for(int i=0; i<n; i++)
        {
            if(k > d[i])
                cout<<"0";
            else if(d[i]%k==0)
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            
            
        }
        cout<<endl;
    }


    return 0;
}