#include<bits/stdc++.h>
#include<iostream>
#define mod 1000000007
using namespace std;
typedef long long ll;


int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        // vector <int> p1(n);
        // vector <int> p2(n);

        vector <int> p1;
        vector <int> p2;
        int a[2*n];
        
        int j=0;
        for(int i=0; i<2*n; i++)
        {
            cin>>a[i];
        }

        int flag =0 ;
        p1.push_back(a[0]);
        // p1[0] = a[0];
        for(int i=1; i<2*n; i++)
        {
            if(a[i] == p1[j] && j< int(p1.size()-1) )
            {
                p2.push_back(a[i]);
                // p2[j] = a[i];
                j++;

            }
            else
            {
                p1.push_back(a[i]);
                // p1[j] = a[i];

            }
            if(p1.size() == n)
            {
                flag = 0;
                break;
            }        
            else if(p2.size() == n)
            {
                flag = 1;
                break;
            }
            
        }
        if(flag == 1)
        {
            for(int i=0; i<n; i++)
            {
                cout<<p1[i]<<" ";
            }
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cout<<p2[i]<<" ";
            }
            /* code */
        }
         cout<<endl;

    }   

    return 0;
}