#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll ch, cc, ca;
    cin>>ch>>cc>>ca;
    ll ah, ac, aa;
    cin>>ah>>ac>>aa;
    ll mh, mah, mc, mac, ma, maa;
    cin>>mh>>mah>>mc>>mac>>ma>>maa;

    ll total;
    cin>>total;

    int a1, x;
    ll temp = min(ch, min(cc, ca));
    if( temp == ch)
    {
        a1 = ah*temp;
        x = ah;
    }
    else if(temp == cc)
    {
        a1 = ac*temp;
        x = ac;
    }
    else
    {
        a1 = aa*temp;
        x = aa;
    }
    ll area;
    ll a2, y;
    temp = max(ch, max(cc, ca));
    if( temp == ch)
    {
        area = min(mh*mah, ah);
        a2 = mh*mah*ch;
        y = area;
    }
    else if(temp == cc)
    {
        area = min(mc*mac, ac);
        a2 = mc*mac*cc;
        y = area;
    }
    else
    {
        area = min(ma*maa, aa);
        a2 = ma*maa*ca;
        y = area;
    }
    

    ll z = total - (x+y);
    int arr[3];
    arr[0] = ch;
    arr[1] = cc;
    arr[2] = ca;
    sort(arr, arr+3);
    ll a3 = z*arr[1];
    cout<<a1+a2+a3<<endl;
    
    return 0;
}