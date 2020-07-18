#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{   
    int n;
    cin>>n;
    vector <int> nums;
    int val;
    for(int i=0; i<n; i++)
    {
            cin>>val;
            nums.push_back(val);
    }
    vector<int> bit_score;
    for(int i=0;  i<n; i++)
    {
        int min = INT_MAX, max=INT_MIN;
        int count = 0;
        while(nums[i]!=0)
        {

            if(nums[i]%10 < min)
            {
                min = nums[i]%10;
            }

            if(nums[i]%10 > max)
            {
               max = nums[i]%10; 
            }

            nums[i] /= 10;
            count++;

        }
    
        if(count == 3)
        {
            val = max*11 + min*7;
            val %= 100;
            // val /= 10;
            bit_score.push_back(val);
        }
        
    }


    map <int, int> even;
    map <int, int> odd;

    int count = 0;
    for(int i=0; i<int(bit_score.size()); i++)
    {
        cout<<bit_score[i]<<"-";
        if(i & 1 == 1)
        {   
            if(bit_score[i])
            {

            }
            else if(odd.find(bit_score[i]) == odd.end())
            {
                odd[bit_score[i]] = 1;
            }
            else
            {
                odd[bit_score[i]]++;
            }
            
        }
        else
        {
            if()
            {

            }   
            else if(even.find(bit_score[i]) == even.end())
            {
                even[bit_score[i]] = 1;
            }
            else
            {
                even[bit_score[i]]++;
            }
        }
        
    }    
    cout<<endl;
    
    for(auto i = even.begin(); i != even.end(); i++)
    {   
        cout<<i->first<<i->second<<":";
        if(i->second >= 3)
        {
            count+=2;
        }
        else if(i->second == 2)
        {
            count+=1;
        }
        
    }
    cout<<endl;
    for(auto i = odd.begin(); i != odd.end(); i++)
    {
        cout<<i->first<<i->second<<":";
        if(i->second >= 3)
        {
            count+=2;
        }
        else if(i->second == 2)
        {
            count+=1;
        }
        
        
    }

    cout<<count<<endl;

    return 0;
}