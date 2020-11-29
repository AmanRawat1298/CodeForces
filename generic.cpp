#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "aman.cpp"




void display()
{
    cout<<"Main"<<endl;
}
template <typename T, typename Y> Y add(T x , Y y)
{
    std::cout<<x+y<<endl;
    return x+y;
}
bool cyc(bool vis[])
{
    vis[0] = 1;
    vis[1] = 1;
    return true;
}
int a(float x)
{
    return x;
}
int  main()
{

    add(5, 7.6);
    add(5.5, 7.6);
    add(5.5, 7);
    add('A','A');
    cout<<a(7.1);
    aman::display();
    display();

    int a =10, b=20;
    int &p= a;
    p=b;
    cout<<a<<b<<p;


    bool vis[4];
    memset(vis, false, sizeof(vis));
    if( 0 &&  cyc(vis))
    {
        cout<<"True";
    }

    for(int i=0; i<4; i++)
    {
        cout<<vis[i]<<"-";
    }
    return 0;
}