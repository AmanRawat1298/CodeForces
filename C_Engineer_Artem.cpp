#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int m, n;
        cin>>m>>n;

        int a[m][n];

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }

        int check_r = 0,check_c=0;
        int index = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(index == 0)
                {
                    check_r = (check_r==1)?0:1;
                    check_c = check_r;
                    if(a[i][j]%2 != check_r)
                    {
                        a[i][j]++;
                    }
                    
                }
                else
                {
                    check_c = (check_c==1)?0:1;
                    if(a[i][j]%2 != check_c)
                    {
                        a[i][j]++;
                    }
                } 
                index = (index+1)%n;   
            }
        }



        for(int i=0; i<m; i++)
        {

            for(int j=0; j<n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }








    }
    

    return 0;
}