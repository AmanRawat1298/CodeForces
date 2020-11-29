#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int n = s.size();
    bool flag = true;
    for(int i=0;i<n/2; i++)
    {
        if(s[i] != s[n-i-1])
        {
            cout<<"Not Palindrome";
            flag = false;
            break;
        }

    }
    if(flag)
    cout<<"\nPalindrome";


    return 1;
}