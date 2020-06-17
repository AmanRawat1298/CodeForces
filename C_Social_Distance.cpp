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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int total = 0;
        int seg = 2*k+1;
        int val = 0;
        
        //Having starting 0 and k spaces empty ahead
        if(s[0] == '0')
        {
            for(int i=0; i<=min(n-1, k); i++)
                total += (s[i] - '0');
            if(total == 0)
            {
                val++;
                s[0] = '1';
            }
        }

        //Having ending 0 and k spaces behind empty
        total = 0;
        if(s[n-1] == '0')
        {
            for( int i=n-1; i>=max(n-1-k, 0); i--)
                total += s[i] - '0';
            if(total == 0)
            {
                val++;
                s[n-1] = '1';

            }
        }
        total = 0;
        //Checking is first and last index have 1 ;
        for( int i=0; i<n; i++)
        {
            total += s[i]-'0';
            if(i >= seg-1)
            {
               if(total == 0)
               {
                   val++;
                   s[i-k] = '1';
                   total++;
               } 
               if(s[i-seg+1] == '1')
                    total--;
            }
        }

        cout<<val<<endl;
    }
    return 0;
}