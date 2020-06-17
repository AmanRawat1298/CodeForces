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
        string res = "";
        for(int i=0; i<s.length()-1; i= i+2)
             res = res + s[i];
        res = res + s[s.length()-1];
        cout<<res<<endl;
		
	}
    return 0;
}