#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{   
    int z;
    cin>>z;
    while(z--)
	{
        ll h,c,t;
        cin>>h>>c>>t;
        if(h==t)
        {
            cout<<"1"<<endl;
            continue;
        }
        else
        {
            if(2*t <= (h+c))
            {
                    cout<<"2"<<endl;
            }
            else
            {   
                ll x = ( c - t ) /(-2*t + h + c);
                
                

                double l_t = (x*h  + (x-1)*c)/(2.0*x - 1);
                double h_t = ((x+1)*h + x*c)/(2.0*x + 1);
                // cout<<"low :"<<l_t<<"\n high :"<<h_t<<endl;
                
                abs(h_t - t) >= abs(l_t - t)? cout<<2*x-1<<endl:cout<<2*x+1<<endl;

            }
        }
        
    }
    return 0;
}