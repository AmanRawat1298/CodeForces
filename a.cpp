#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int start=n*1000000;
    
    int endd=m*1000000 + 235959;
    // cout<<start<<" "<<endd<<endl;
    int ans=0;
    for(int i=start;i<=endd;i++)
    {
        string t;
        t =to_string(i);
        if(t[0]==t[6] && t[1]==t[5]&& t[2]==t[4] && t[3] != 6)
        {
           
         int a = (t[1]-'0')*10;
         int b = a+(t[2]-'0'); 
         if(b < 24)
            ans++;
        }
        else if(t[0]==t[6] && t[1]==t[5]&& t[2]==t[4] && t[3] == 6 )
        {
           
            int a = (t[1]-'0')*10;
            int b = a+(t[2]-'0'); 
            if(b < 24 &&  t[2] - '0' == 0 && t[4] - '0'== 0)
                ans++;
        }
    }
    cout<<ans-4<<endl;
}