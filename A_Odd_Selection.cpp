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
		int n,x;
        cin>>n>>x;
        int a[n];
        int odd_count = 0;
        for( int i=0; i<n; i++)
        {    
            cin>>a[i];
            if(a[i]%2 != 0)
                odd_count++; 
        }
        int even_count = n - odd_count;
        if(x == 1 && odd_count > 0)
        {
            cout<<"1Yes\n";
        }
        else if(x%2 != 0 && odd_count>=x && even_count>0)
        { 
              cout<<"2Yes\n";
        }
        else
        {
            int flag =0;
            while(even_count--)
            {
                
                x--;
                if(x%2!=0 && odd_count>=x)
                {
                    cout<<"3Yes\n";flag=1;
                    break;
                }
                if(x == 1)
                    break;
            }
            if(flag==0)
            {
                if( (x == 1 && odd_count > 0)  )
                    cout<<"4Yes\n";
                else if(x%2 == 0)
                    cout<<"No\n";
                else if(odd_count>0)   
                    cout<<"5Yes\n";
                else
                    cout<<"No\n";
            }
        }
	}
    return 0;
}