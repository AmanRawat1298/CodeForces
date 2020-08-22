#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,x,y;
        cin>>n>>m>>x>>y;
        if(n*m == 1)
        {
            cout<<x<<endl;
        }
        else if(x <= (y/2))
        {
            long long sum = n*m*x;
            cout<<sum<<endl;
        }
        else if(x > y/2)
        {
            long long sum = 0;
            long long val1 = y/2;
            long long val2 = y - val1;
            
            if(n*m & 1 == 1 )
            {
                
                sum = (n*m)/2 + 1;
                sum *= val2;
                sum += (n*m/2)*val1;

                long long res = n*m/2 + 1;
                res *= x;
                
                
                sum = max(res, sum);
            }
            else
            {
                sum = (n*m)/2;
                sum *= val2;
                sum += (n*m/2)*val1;
            }

            cout<<sum<<endl;
            
        }
    
    }


    return 0;
}