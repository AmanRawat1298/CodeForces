#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
using namespace std;
typedef long long ll;


int main() {

    int t;
    cin>>t;
    while(t--)
    {

        map <int,int> m;
        int val;
        for(int i=0; i<3; i++)
        {
            cin>>val;
            if(m.find(val) != m.end())
                m[val]++;
            else
            {
                m[val] = 1;
            }
            
        }
        int count = m.rbegin()->second;
        if(count>=2)
        {
            cout<<"YES"<<endl;
            cout<<m.begin()->first<<" "<<m.begin()->first<<" "<<m.rbegin()->first;
        }
        else
        {
            cout<<"NO";
        }
        cout<<endl;


    }   

    return 0;
}