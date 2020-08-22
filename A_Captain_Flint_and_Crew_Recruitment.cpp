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
        int sum = 6 + 10 + 14;
        if(n <=30 )
        {
            cout<<"NO";
        }
        else if(n - sum > 0)// && ((n - sum != 6) || (n - sum != 10) || (n - sum != 14)  ))
        {
             cout<<"YES\n";
             if(((n - sum != 6) && (n - sum != 10) && (n - sum != 14))) 
             {
                 cout<<"6 10 14 "<<n - 30;
             } 
             else
             {
                 /* code */
                 cout<<"6 10 15 "<<n - 31;
             }
 
        }  
        else
        {
            cout<<"NO";
        }
         
        cout<<endl;
        
	}
    return 0;
}