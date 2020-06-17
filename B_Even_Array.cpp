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
        int arr[n];
        for( int i=0; i<n; i++)
            cin>>arr[i];
        int faults = 0, even = 0, odd = 0;
        for( int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(arr[i]%2!=0)
                    faults++; 
            }
            else
            {   
                if(arr[i]%2==0)
                    faults++;
            }
            if(arr[i]%2==0)
                even++;
            else
                odd++;

        }
        // cout<<even<<odd<<" :: "<<faults;
		if(even - odd > 1 || even - odd < 0 )
            cout<<"-1\n";
        else if(n==1 && faults==1)
            cout<<"-1\n";
        else
            cout<<faults/2<<endl;
	}
    return 0;
}