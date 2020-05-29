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
		int n,m,x,y;
        cin>>n>>m>>x>>y;
        char a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }


        if(2*x <= y)
            y = 2*x;
        
        int cost = 0;
        for( int i=0; i<n; i++)
        {
            for( int j=0; j<m; j++)
            {
                if(a[i][j] == '.' && a[i][j+1] == '.' && j+1<m)
                {    
                    cost += y;
                    j++;
                    // cout<<"y added: ";
                }
                else if(a[i][j] == '.')
                {
                        cost += x;
                        // cout<<"xadded: ";
                }
                else
                    continue;

            }
            // cout<<"i:"<<i<<" cost: "<<cost<<endl; 
        }
        cout<<cost<<endl;
	}
    return 0;
}