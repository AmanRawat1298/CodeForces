#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{



    int t;
    cin>>t;
    while(t--)
    {
        int types, dim;
        cin>>types>>dim;

        // int A[2][2][types];
        int a,b,c,d;
        bool flag = false;
        for(int i=0; i<types; i++)
        {
            cin>>a>>b>>c>>d;
            if( (b == c))
                flag = true;   
        }

        if(dim&1)
            cout<<"NO";
        else if(flag == true)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
        



        cout<<endl;
    }
}