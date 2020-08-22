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

        int count_n = n-ceil((float)(n)/4);
        int count_e = n - count_n;
        while(count_n--)
            cout<<"9";
        while(count_e--)
            cout<<"8";
        cout<<endl;
        
	}
    return 0;
}