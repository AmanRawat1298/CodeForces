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
		int  n, m;
        cin>>n>>m;
        if( (n*m%2) == 0)
            cout<<n*m/2<<endl;
        else
            cout<<n*m/2 + 1<<endl;
	}
    return 0;
}