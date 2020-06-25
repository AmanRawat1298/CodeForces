


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
        string s;
        cin>>s;
        ll res = 0;
        for(ll i = 0 ; i<s.length()+2; ++i)
        {
            ll cur = i;
            bool  ok = true;
            for(ll j = 0 ; j<s.length(); ++j)
            {
                
                res = res + 1;
                if (s[i] == '+')
                    cur = cur + 1;
                else
                    cur = cur - 1;
                if (cur < 0)
                {    ok = false;
                    break;
                }
                if(ok==true)
                    break;

            }
        }
        cout<<res<<endl;
            

	}
    return 0;
}
