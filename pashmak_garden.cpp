#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
   int x1,x2,y1,y2;
   cin>>x1>>y1>>x2>>y2;

   if(x1!=x2 && y1!=y2 && (abs(x1-x2) != abs(y1-y2)))
    cout<<"-1\n";
   else if(x1!=x2 && y1!=y2)
   {
       cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1<<" \n";
   }
   else if(x1 == x2)
   {
       int diff = abs(y2-y1);
       cout<<x1 + diff<<" "<<y1<<" "<<x2 + diff<<" "<<y2<<" \n";
   }
   else 
   {
       int diff = abs(x2-x1);
       cout<<x1<<" "<<y1+diff<<" "<<x2<<" "<<y2+diff<<" \n";
   }
   
   


   return 0;
}