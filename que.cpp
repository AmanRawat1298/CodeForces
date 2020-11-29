#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void freq(vector< int> arr, vector <int> q)
{
    int n = arr.size();
    int m = q.size();
    
    vector <int> suff;
    map <int, int> mp;
    
    for(int i=n-1; i>=0; i--)
    {
        mp[arr[i]]++;
        auto j = mp.rbegin();
        suff.push_back(j->second);
    }

    // cout<<"suff\n";
    for(int i=0; i<m; i++)
    {
        cout<<suff[n - q[i]]<<" ";
    }
}

int main()
{
    int n,m;
    cin>>n;
    vector <int> arr(n);

    for(int i=0; i<n; i++)  
        cin>>arr[i];

    cin>>m;
    vector <int> q(m,0);
    for(int i=0; i<m; i++)
    {
        cin>>q[i];
    }
    freq(arr, q);



    return 0;
}