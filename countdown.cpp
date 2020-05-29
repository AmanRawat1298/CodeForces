#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int t;
    cin>>t;
    int z=1;
    while(t--)
	{
        int res = 0;
        int n,k;
        cin>>n>>k;
        int v[n];
        for( int i=0; i<n; i++) 
        {
            cin>>v[i];
        }

        for(int i=0; i<=n - k; i++)
        {      
            if(v[i]==k)
            {
                int val = k;
                while(v[i] == val && v[i+1] == v[i] - 1 && i<n)
                {   val--;
                    i++;
                    if(v[i] == 1)
                        res++;
                }
            }
        }
        cout<<"Case #"<<z++<<": "<<res<<endl;
	}
    return 0;
}