#include <bits/stdc++.h>
using namespace std;
struct my 
{
    string name;
    int val;

};
bool cmp(my a, my b)
{
    if(a.name == b.name)
        return (a.val<b.val);
    else
    {
        return (a.name > b.name);
    }
    
}
int main()
{
    // my aman[2];//, karan;
    vector <my> aman(6);
    for(int i=0; i<aman.size(); i++)
    {
        cin>>aman[i].name;
        cin>>aman[i].val;
    }

    for(int i=0; i<aman.size(); i++)
    {
        cout<<i<<"-";
        cout<<aman[i].name<<" : ";
        cout<<aman[i].val<<endl;
    }

    sort(aman.begin(), aman.end(), cmp);


    for(int i=0; i<aman.size(); i++)
    {
        cout<<i<<"-";
        cout<<aman[i].name<<" : ";
        cout<<aman[i].val<<endl;
    }

    return 0;
}