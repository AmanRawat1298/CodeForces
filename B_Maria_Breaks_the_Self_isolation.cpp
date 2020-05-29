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
        int val;
        vector <int> v;
        for( int i=0; i<n; i++)
        {
            cin>>val;
            v.push_back(val);
        }
        sort(v.begin(), v.end());

        int sum =1, present =1;

        for(int i=0; i<n; i++)
        {   
            if(v[i] <= present)
            {
                present++;
                sum = present;
            }
            else
                present++;
        }
        cout<<sum<<endl;
	}
    return 0;
}