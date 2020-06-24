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
        string s;
        cin>>s;
        int index;
        if(n == 1 )
                cout<<s[0];
        else
        {
            /* code */
            int i;
            for( i=0; i<n; i++)
            {
                if(s[i] == '1')
                {    
                    index == i;
                    break;
                }
                cout<<s[i];
            }
            int no_zero=i;
            int flag =0;
            for( i; i<n; i++)
            {
                if(s[i] == '0')
                {    
                    index = i;
                    flag = 1;
                }
            }
            if(flag == 0)
            {
                for( i=no_zero; i<n; i++)
                {
                    cout<<s[i];
                }
            }
            else
            {
                /* code */
                for( i=index; i<n; i++)
                {
                    cout<<s[i];
                }
            }
            
            

        }
        
       
        cout<<endl;
	}
    return 0;
}