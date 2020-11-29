#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{



    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;

        if(n<=2)
            cout<<1;
        else
        {
            int f = (n-2)/x;
            // cout<<n<<x;
            if((n-2)%x == 0)
                f--;
            cout<<2+f;
        }
        





        cout<<endl;
    }
}