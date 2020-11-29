#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{



    int t;
    cin>>t;
    while(t--)
    {
        int sum;
        cin>>sum;
        
        if(sum == 1)
            cout<<0;
        else
        {
            int t = sqrt(sum);
            int res = sqrt(sum)*2;


            if(t*t == sum)
            {
                cout<<res-2;
            }
            else
            {
                cout<<res-1;
            }
            
        }
        
        
        cout<<endl;
    }
}