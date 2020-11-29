#include <iostream>
using namespace std;

int ans;
int solve(int i1, int i2, int i3)
{
	long long res=0;
    long long val = 0;
    int n = i3-i2+1;
    int k ;
    // cout<<"n: "<<n;
    for(int i=i2;i<=i3;i++)
    {
        k = i1;
        val = 1;
        int p = n--;
        while(k>0)
        {
            val *=  p--;
            k--;
        }
        res += val;
    }
    return res;
}

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	int l, r;
	cin>>l>>r;
	
	ans= 0;
	
	
	int a  = solve(n, l, r);
	cout<<a ;
	
	return 0;
}