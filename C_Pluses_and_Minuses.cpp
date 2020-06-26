


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
        string s;
        cin>>s;
 
        ll n = s.length();
 
        ll pref[n+1];
        if(s[0]=='+')
            pref[0]=1;
        else{
            pref[0] =-1;
        }
 
        for(ll i=1;i<n;i++){
            if(s[i]=='+'){
                pref[i] = pref[i-1] +1;
            }else{
                pref[i] = pref[i-1]-1;
            }
        }
        //pref[n] = -1*abs(pref[n-1])-1 ;
 
        ll res=1;
        ll ans=0;
 
        for(ll i=0;i<=n;i++){
            if(pref[i]==(-1*res) && i!=n){
                ans = ans + i + 1;
                res++;
            }else if(i==n){
                ans = ans + n;
            }
        }
 
        cout<<ans<<"\n";

	}
    return 0;
}
