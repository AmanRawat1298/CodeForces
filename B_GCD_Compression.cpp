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
        int n;
        cin>>n;
        vector <int> even;
        vector <int> odd;
        int a[2*n];
        for(int i=0; i<2*n; i++)
        {
            cin>>a[i];
            if(a[i]%2 == 0)
            {
                even.push_back(a[i]);
            }
            else
            {
                odd.push_back(a[i]);
            }
        }

        int x = 0;
        if(even.size() > 1)
        {
            for(int i=1; i<min( int(even.size()), n); i++)
            {
                cout<<1<<" "<<i+1<<endl;
                x++;
            }
        }
        for(int i=1; i<min( int(odd.size()), n-x); i++)
            {
                cout<<int(even.size())+1<<" "<<int(even.size())+i<<endl;
            }

        
    }
    return 0;
}