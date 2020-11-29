#include <iostream>
#include <bits/stdc++.h>
using namespace std;

set <string> st;
bool shouldswap(string s, int index, int curr)
{
    for(int i=index; i<curr; i++)
    {
        if(s[i] == s[curr])
            return false;
    }
    return true;
}



void permute(string s, int l, int r)
{
    if(l==r)
    {
        cout<<s<<endl;
        // st.insert(s);
    }    
    else
    {                    
            for(int i=l; i<=r; i++)
            {
                bool check = shouldswap(s, l, i); 
                if(check)
                {
                    swap(s[l], s[i]); 
                    permute(s, l+1, r);
                    swap(s[l], s[i]);
                }
            }
    }
    
}

void powerset(string str, int n, int index,string curr = "")
{
    if(index == n)
    {
        cout<<"as : "<<curr<<endl;
        return;
    }
    powerset(str,n, index+1, curr+str[index]);
    powerset(str,n, index+1, curr);
}

int main()
{
    string s;
    cin>>s;

    int n = s.size()-1;
    permute(s, 0, n);
    
    // for(auto i: st)
    // {
    //     cout<<i<<endl;
    // }
    cout<<endl<<"Power Set: ";
    powerset(s,n,0);
    return 0;
}