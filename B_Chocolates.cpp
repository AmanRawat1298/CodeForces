#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int t;
    cin>>t;
    int val;
    vector <int> v;
    while(t--)
	{
        cin>>val;
        v.push_back(val);
	}
    auto i =v.rbegin();
    int sum = *i;
    if(sum > 1)
    {
        for( i =  ++v.rbegin(); i!=v.rend(); i++)
        {
            if(*(i-1) == 1)
            {
                break;
            }
            else if( *i >= *(i-1))
            {
                sum += min( *i ,*(i-1))-1;
                *(i) = min( *i ,*(i-1))-1;
            }
            else
                sum += min( *i ,*(i-1));
                *i =  min( *i ,*(i-1));
            // cout<<sum<<":";

        }
            }
    cout<<sum<<endl;
    return 0;
}