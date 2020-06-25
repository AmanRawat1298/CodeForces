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
        int zero=0,ones=0;
        for(int i=0; i<int(s.size()); i++)
        {
            if(s[i] == '0')
                zero++;
            else
            {
                ones++;
            }
            
        }  
        int x = min(zero,ones); 
        if(x==1)
            cout<<"DA\n";
        else if(x%2 == 0)
        {
            cout<<"NET\n";
        }
        else
        {
            cout<<"DA\n";
        }
        
        

	}
    return 0;
}