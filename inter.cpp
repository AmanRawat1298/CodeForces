#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void gen_lps(int* lps, string pat)
{
    int n = pat.size();
    int i=1,j=0;// len=0;
    lps[0] = 0;
    while(i<n)
    {
        if(pat[i] == pat[j])
        {
            // j++;
            lps[i++] = ++j; 
        }
        else
        {
            if(j != 0)
            {
                j = lps[j-1];
            }
            else
            {
                lps[i++] = 0;

            }
            
        }
        
    }
}
bool check(string str, string pat)
{
    int i=0,j=0;
    
    int M = str.size(), N = pat.size();
    int lps[N];
    gen_lps(lps, pat);
    while(i<M)
    {
        if(pat[j] == str[i])
        {
            i++;
            j++;
        }
        if(j == N)
        {
            return true;
        }
        else if(i < M && pat[j] != str[i])
        {
            /* code */
            if(j != 0)
            {
                j = lps[j-1];
            }
            else
            {
                i++;
            }
            
        }
        
    }

    return false;
}

int main()
{
string pat;

string  str;
cin>>str;
cin>>pat;

if(check(str, pat) == true)
    cout<<"YES\n";
else
{
    cout<<"NO\n";
}


    return 0;
}