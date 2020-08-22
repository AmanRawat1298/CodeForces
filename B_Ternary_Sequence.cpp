#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ax,bx,ay,by,az,bz;
        cin>>ax>>ay>>az;
        cin>>bx>>by>>bz;

        long ans = 0;
        int temp = min(az, by);

        ans  = ans + temp * 2;
        az = az - temp;
        by = by - temp;

        temp = min(az, bz);
        az -= temp;
        bz -= temp;

        temp = min(az, bx);
        az = az -temp;
        bx = bx - temp;

        temp = min(ay, by);
        ay -= temp;
        by -= temp;

        temp = min(ay, bx);
        ay -= temp;
        bx -= temp;

        temp = min(ax, bx);
        ax -= temp;
        bx -= temp;

        temp = min(ax, bz);
        ax -= temp;
        bz -= temp;

        temp = min(ax, by);
        ax -= temp;
        by -= temp;

        temp = min(ay, bz);

        ans -= temp*2;

        ay -= temp;
        bz -= temp;

        cout<<ans;
        
        
        cout<<endl;
    }
}