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
        int row, col;
        cin>>row>>col;
        // int m[row][col];
        int val ;
        vector <vector<int> > m;
        for(int i=0; i<row; i++)
        {
            vector<int> r;
            for(int j=0; j<col; j++)
            {
                cin>>val;
                r.push_back(val);
            }
            m.push_back(r);
        }
        bool ashish = false;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {   
                if(m[i][j] == 0)
                {
                    bool flag = true;
                    int x=0,y=0;
                    while(x<row)
                    {
                        if(m[x][j] == 1)
                        {
                            flag = false;
                            break;
                        }
                        x++;
                    }
                    if(flag == true)
                    {
                        while(y<col)
                        {
                            if(m[i][y] == 1)
                            {
                                flag = false;
                                break;
                            }
                            y++;
                        }
                    }

                    if(flag == true)
                    {
                        m[i][j] = 1;
                        ashish = !ashish; 
                    }
                }
                // cout<<m[i][j]<<" :";

            }
        }
        if(ashish)
            cout<<"Ashish\n";
        else
            cout<<"Vivek\n";
	}
    return 0;
}