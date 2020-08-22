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
        map <int, int> mp;
        for(int i=0; i<s.size(); i++)
        {
            if(mp.find(s[i] - '0')!= mp.end())
            {
                mp[s[i] - '0']++;
            }
            else
            {
                mp[s[i] - '0'] = 1;
            }
            
        }

        //if one element
        if(mp.size() == 1)
        {
            cout<<0;
        }
        else
        {
            // auto i = mp.rbegin();
            // int largest = i->first;
            // i++; 
            // int second =i->first;
            // cout<<mp.size()<<" - "<<largest<<" : "<<second; 
            auto largest = mp.rbegin();
            auto second = largest++;
            //got it


            if(largest->second - second->second >= second->second)  //dont grp
            {
                cout<<s.size() - largest->second;
            }
            else
            {
                //second times:
                int first_occur, index;
                vector <int> seq;
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]- '0'  == largest->first || s[i]- '0'  == second->first) 
                    {
                        seq.push_back(s[i] - '0');
                    }
                }

               
                for(int i=0; i + 1<seq.size(); i++)
                {
                    if(seq)
                }
                for(int i=0; i<s.size(); i++)
                {
                    
                }
                
            }
            
        }
        cout<<endl;
        
	}
    return 0;
}