#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_ques(char ch) 
{ 
    return (ch == '?');// || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'); 
} 

int main()
{   
    int t;
    cin>>t;
    while(t--)
	{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int flag=0;
        int rep = 0;
        int first_rep = -1;
        string p = "abacaba";
        for(int i=0; i<=int(s.size()) - 7; i++)
        {   
            int j=0,k=i;
            while(s[k] == p[j] || s[k] == '?')
            {
                s[k] = p[j];
                k++;
                j++;
                if(s[k] == '?' && first_rep == -1)
                {
                    rep = 1;
                    first_rep = k;
                }
                if(j == 7)
                {
                    flag++;;
                }
            }   
        }
       
        for(int i=0; i< int(s.size()); i++)
        {   
            if(int(s[i]) > 122 || int(s[i]) < 65 || int(s[i]) > 92 && int(s[i]) < 97)
            {
                s[i] = 'd';
            }
        }

        if(flag == 2 && first_rep != -1)
        {
            cout<<"Yes\n";
            s[first_rep] = 'd';
            cout<<s<<endl;
        }
        else if(flag == 1 || (flag == 2 && rep == 1 ))
        {
            cout<<"Yes\n";
            cout<<s;
            cout<<endl;
        }
        else if(flag == 0 || flag > 1)
            cout<<"No\n";

        
		
	}
    return 0;
}