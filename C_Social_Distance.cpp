#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int t;
    cin>>t;
    int n;
    int k;
    while(t--)
	{
        
        
        cin>>n>>k;
        string a;
        cin>>a;
        
        int count = 0;
        int adds = 0;
        // cout<<"\nstring ;"<<a<<endl;
        queue <char> q;
        for( int i=0; i<a.size(); i++)
        {   
            if(a[i] == '1')
            {
                // cout<<"\nwhen a[i] == 1 "<<a[i]<<"-";
                count++;
            }
            q.push(a[i]);
            // cout<<q.size();
            cout<<endl<<q.size()<<" c "<<count<<endl;
            if(q.size() >= 2*k+1)
            {   
                
                if(count == 0)
                {
                    adds++; 
                    int z = 2*k+1;
                    while(z--)
                        q.pop();
                    // q.push(0);
                    z=k;
                    while(z>0)
                    {
                        q.push('0'); 
                        z--;
                    }
                    z=k; 
                    q.push('1');
                    while(z>0)
                    {
                        q.push('0'); 
                        z--;
                    }
                    count++;
                    cout<<"\nadded "<<adds<<" qsize() = "<<q.size()<<endl;
                }


                if(q.front() == '1')
                {
                        count--;
                }
                q.pop();
            }
        }
        cout<<"\nANS "<<adds<<endl;
	}
    return 0;
}