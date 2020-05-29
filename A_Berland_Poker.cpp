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
		int n, m ,k;
        cin>>n>>m>>k;
        if(m<=n/k)
        {
            cout<<m<<endl;
            continue;

        }
        else
        {
            int j, rem, count = 0; 
            j = m - n/k;
            rem = j;
            while(rem>0)
            {
                rem = rem - (k-1);
                count++;
            }
            cout<<n/k - count<<endl;
        }
	}
    return 0;
}