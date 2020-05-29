#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
        int n,x;
        cin>>n>>x;
        int val;
        vector <int> v;
        for( int i=0; i<n; i++)
        {
            cin>>val;
            for( int j=1; j<=val; j++)
            {
                v.push_back(j);
            }
        }   
        queue <int> q;
        int sum=0, max_so_far =0;
        int start = 0;
        int i=0;
        int flag =0;
        while(true)
        {  
            
            if(start == 0 && flag == 1)
            {
                break;
            }

            
            sum+=v[i];
            q.push(v[i]);


            if(q.size()>x)
            {
                sum -= q.front();
                q.pop();
                start = (start+1)%v.size();
                flag = 1;
            }
            if(sum> max_so_far)
                max_so_far = sum;

            i = (i+1)%v.size();    
        }
        cout<<max_so_far<<endl;
    return 0;
}