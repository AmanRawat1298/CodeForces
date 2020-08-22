#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void floodfillUtil(vector <vector<int>> &a, int x, int y, int prevC, int newC)
{

    if(x <0 || x >= a.size() || y<0 || y >= a[0].size())
        return;
    if(a[x][y] != prevC || a[x][y] == newC)
        return;
    
    a[x][y] = newC;
    floodfillUtil(a, x+1, y, prevC, newC);
    floodfillUtil(a, x, y+1, prevC, newC);
    floodfillUtil(a, x-1, y, prevC, newC);
    floodfillUtil(a, x, y-1, prevC, newC);
    
    
}

void floodfill(vector < vector<int> > &a, int x, int y, int newC)
{
    int prevC = a[x][y];
    floodfillUtil(a,x,y,prevC, newC);
}


int main()
{
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n,val;
	    cin>>m>>n;
	    vector <vector<int>> a;
	    for(int i=0; i<m; i++)
	    { 
	        vector<int> v;
	        for(int j=0; j<n; j++)
	        {
	            cin>>val;
                v.push_back(val);
	        }
	        a.push_back(v);
            v.clear();
	    }
	    
	    int x,y,k;
	    cin>>x>>y>>k;
	    floodfill(a, x,y,k);
	    
	    for(int i=0; i<m; i++)
	    { 
	        for(int j=0; j<n; j++)
	        {
	            cout<<a[i][j]<<" ";
	        }
	    }
        cout<<endl;
	    
	    
	}
	return 0;
}