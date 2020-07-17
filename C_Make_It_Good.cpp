#include<bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;


int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector <int> arr(n);

        for(int i=0; i<n;i++)
        {
            cin>>arr[i];
        }
        int i=n-1;
        while(i>0 and arr[i]<=arr[i-1])
        {
            i--;
        }
        while(i>0 and arr[i]>=arr[i-1])
        {
            i--;
        }
        cout<<i<<endl;
    }   

    return 0;
}