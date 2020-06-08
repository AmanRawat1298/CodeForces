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
        vector <int> a;
        vector <int> b;
        int val;
        for(int i=0 ;i<n ;i++)
        {
            cin>>val;
            a.push_back(val);
        }

        for(int i=0 ;i<n ;i++)
        {
            cin>>val;
            b.push_back(val);
        }

        int type1 =0 ,type2 = 0;
        bool flag = false;
        for( int i=0; i<n; i++)
        {
            if(b[i] == 0)
            {    
                if(a[i] < type1)
                {
                    cout<<a[i]<<" this\n";
                    flag = true;
                    break;
                }
                type1 = a[i];
            }
            else
            {   
                if(a[i] < type2)
                {
                    cout<<a[i]<<" this\n";
                    flag = true;
                    break;
                }
                type2 = a[i];

            }
        }
        if(flag == true)
            cout<<"No\n";
        else
            cout<<"Yes\n";
	}
    return 0;
}