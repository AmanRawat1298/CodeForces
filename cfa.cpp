#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string str = "2020";
        int i=0; 
        int n;
        cin>>n;
        string s;
        cin>>s;
        int j = n-1;

        while(i<4)
        {
            if(s[i] == str[i])
                i++;
            else
            {
                break;
            }
            
        }


        int k = 3;
         
        while(j>=0)
        {
            if(s[j] == str[k])
            {
                j--;k--;
                i++;
            }
            else
            {
                break;
            }
            
        }   
        if(i>=4)
            cout<<"YES";
        else
        {
            cout<<"NO";
        }
        cout<<endl;
        


    }


    return 0;
}