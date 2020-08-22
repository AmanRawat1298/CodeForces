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
        int min = INT_MAX;
        
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i] < min)
                min = a[i];

        }
        
        vector <int> fixed;
        for(int i=0; i<n; i++)
        {
            if(a[i]%min != 0)
            {
                fixed.push_back(a[i]);
            }
        }

        if(is_sorted(fixed.begin(), fixed.end()))
        { 
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
        cout<<endl;
    }
}