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
        
        int n,k;
        cin>>n>>k;
        vector <int> v(n);
        for(int i=0; i<n; i++)
        {    
            cin>>v[i];
        }
        vector <int> f(k,0);
        for(int i=0;i<k ;i++)
        {
                cin>>f[i];
        }

        ll sum = 0;
        int beg=n-k;
        int end=n-1;
        sort(v.begin(),v.end());
        sort(f.begin(), f.end());


        for (auto i =0; i<k; i++) 
        {
            if(f[i] == 1)
            {
                sum += 2*v[end--];
            }
            else
            {
                beg -= (f[i] - 1);
                sum += (v[beg]+v[end--]);
            }
        }
  


        cout<<sum;


        
        cout<<endl;
	}
    return 0;
}