#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int t;
    cin>>t;
    vector <int> v;
    int val ;
    for( int i=0; i<t; i++) 
    {
        cin>>val;v.push_back(val);
    }

     
    int count = 1;
    int res = 1;
    for(int i =1 ; i<t; i++)
    {
        if(v[i] > v[i-1])
            count++;
        else
        {
            count = 1;
        }
        res = max(res,count);
        
    }
    cout<<res<<endl;
    return 0;
}