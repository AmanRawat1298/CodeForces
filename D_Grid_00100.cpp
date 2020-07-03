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
		int n,k;
        cin>>n>>k;
        int m[n][n];
        // cout<<n<<k;
        for(int i=0; i<n;i++)
        {    for(int j=0; j<n;j++)
            {
                m[i][j] = 0;
            }
        }

        if(k%n == 0)
        {
            /* code */
            cout<<"0\n";

        } 
        else
        {
            cout<<"2"<<endl; 
        }
           


        for(int i=0; i<n && k; i++)
        {
            for(int j=0;j<n && k; j++)
            {
                int x=j;
                int y = (i+j)%n;
                m[x][y] = 1;
                k--;
            }
        }

        for(int i=0; i<n ; i++)
        {
            
            for(int j=0;j<n; j++)
            {
                cout<<m[i][j];
            }
            cout<<endl;
        }

	}
    return 0;
}