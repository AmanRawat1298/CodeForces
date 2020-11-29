#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long n,temp;
        cin>>n;
        bool flag = false;
        unordered_set <long long> s;
        for(long long i=0; i<n; i++)
        {
            cin>>temp;
            if(s.find(temp) != s.end() )
            {
                flag = true;
            }
            s.insert(temp);
        }    
        
        if(flag)
            cout<<"YES";
        else
        {
            cout<<"NO";
        }
        cout<<endl;
        
    }
    

    return 0;
}