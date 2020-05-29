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
        int h,c,t;
        cin>>h>>c>>t;
        if( h == t || c == t )
        {
               cout<<1<<endl;
               continue;
        }
        else
        {
            cout<< (h-c)/(h -t)<<endl; 
        }

	}
    return 0;
}