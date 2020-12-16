#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n > 45)
            cout<<-1;
        else if(n == 45)
            cout<<"123456789";
        else
        {
            string s = "";
            
            int k = 9;
            if(n<=9)
                cout<<n;
            else
            {
                while(n-k >= 0)
                {
                    n -= k;
                    s = to_string(k) + s;
                    k--;
                }
                if(k > n && n != 0) 
                cout<<to_string(n)<<s;
                else
                {
                    cout<<s;
                }
                
            }
            
            
        //    cout<<s;
        }
        cout<<endl;
        
    }
 
 
    return 0;
}