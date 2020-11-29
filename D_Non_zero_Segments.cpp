#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int solve(vector<int> &arr,int j, int n)
{
    unordered_map<long long , vector<long long> > map; 
 
    vector <pair<long , long>> out; 
 
    long long sum = 0; 
   int count = 0;
    for (int i = j; i < n; i++) 
    { 
        
        sum += arr[i]; 
   
        if (sum == 0) 
        {
            count++;
            count += solve(arr, i, n);
            break;
           
        }
            
 
        if (map.find(sum) != map.end() && sum !=INT_MAX) 
        { 
           
            vector<long long> vc = map[sum]; 
  
            count++; 
            count += solve(arr, i, n);
            break;
        } 
 
        map[sum].push_back(i); 
    } 
 
    return count;
}
int main()
{
 
 
 
    // int t;
    // cin>>t;
    // while(t--)
    // {
        
        int n;
        cin>>n;
        vector <int> a(n,0);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
 
 
        cout<<solve(a,0, n);
 
        cout<<endl;
    // }
}