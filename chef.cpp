#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,b,m;
        cin>>n>>b>>m;
        vector <long long> a(m,0);
        for(int i=0; i<m; i++)
            cin>>a[i];
        // long long blocks = n/b;
        long long prev = -1;
        long long curr;
        long long count = 0;
        for(int i=0; i<m; i++)
        {
            curr = a[i]/b;
            if(curr!=prev)
            {
                // cout<<"curr"<<curr<<"prev"<<prev<<"count"<<count<<endl;
                count++;
            }
            prev = curr;
        }
        cout<<count<<endl;
    }


    return 0;
}