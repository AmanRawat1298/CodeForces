#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int n;
    cin>>n;
    
    string brides;
    string grooms;
    cin>>brides>>grooms;

    int g_r=0, g_m = 0;
    for(int i=0; i<n; i++)
    {
        if(grooms[i] == 'r')
        {
            g_r++;
        }
        else
        {
            g_m++;
        }
    }
    int i;
    for( i=0; i<n; i++)
    {
        if(brides[i] == 'r')
        {
            g_r--;
            if(g_r<0)
                break;
        }
        else
        {
            g_m--;
            if(g_m<0)
                break;
        }
        
        
    }

    cout<<n-i;



    return 0;
}