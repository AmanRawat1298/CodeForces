#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;


        vector<int> arr(n);

        for(int i=0;i<n ;i++)   cin>>arr[i];

        int curr = 0;
        int result = 10000000;
        for(int i = 0;i<n;i++)
        {
            curr = curr + arr[i];
            int a = i;

            bool h = true;
            for(int j = i+1;j<n;j++)
            {
                int curr_sum = 0;

                while(j < n and curr_sum < curr)
                {
                    curr_sum += arr[j];
                    j++;
                    a++;
                }
                j--;
                if(curr_sum == curr)
                {
                    a--;      
                }
                else {
                    h = false;
                    break;
                }

            }

            if(h)
            {

                result = min(result, a);
            }
        }

        if(result == INT_MAX)
        {
            cout<<n-1<<endl;
        }
        else {
            cout<<result<<endl;
        }
    }

    return 0;
}