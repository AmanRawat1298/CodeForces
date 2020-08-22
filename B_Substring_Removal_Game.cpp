#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector <int> ones;
        int k = 0;
        for(int i=0; i<s.size(); i++)
        {
            k = 0;
            
            if(s[i] == '1')
            {
                k=1;
                while(s[i]== '1' && s[i+1] == '1' && i<s.size()-1)
                { 
                    k++; i++;
                }
            }
               
            if(k!=0)
            {   
                ones.push_back(k);
            }
        }
        int ans = 0;
        sort(ones.begin(), ones.end(), greater <int> ());
        for(int i=0; i<ones.size(); i++)
        {   
            if(i%2 == 0)
            {
                ans += ones[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}