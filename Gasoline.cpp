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
        
        long long f[n];
        long long c[n];
        int i;
        for(i=0; i<n; i++)
        {
            cin>>f[i];
        }

        for(i=0; i<n; i++)
        {
            cin>>c[i];
        }
        vector <pair<long long,long long> > v;
        for(int i=0; i<n; i++)
        {
            v.push_back(make_pair(f[i], c[i]));
        }

        sort(v.begin(), v.end(), [](pair<long long,long long> a,pair<long long, long long>  b)
        {
            if(a.second == b.second)
                return a.first > b.first;
            return a.second < b.second;
        });
        
        long long cost = 0;
        long long dist = n;
        long long temp;
        
        for(auto s:v)
        {     
            if(dist == 0)
            {
                break;
            }    

            temp = min(dist, s.first);
            dist -= temp;
            cost += ( (s.second)*temp );

        }

        cout<<cost<<endl;

    }
    return 0;
}