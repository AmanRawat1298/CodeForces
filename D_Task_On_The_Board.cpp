/*author - Aryan Mittal*/
#include<bits/stdc++.h>
using namespace std;

#pragma GCC push_options
#pragma GCC optimize ("unroll-loops")


#define print(a)        for (auto x : a) cout << x << " "; cout << endl
#define print_upto(a,n)        for(int i=0;i<n;i++)    cout<<a[i]<<" "; cout<<endl
#define take(x,n)           for(int i=0;i<n;i++)  cin>>x[i];

#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y)<<"\n"

#define ll long long
#define pie_value 3.14159265358979323846

int main() {

	// Use ctrl+shift+b ( second option )
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// 	freopen("error.txt" , "w" , stderr);
// #endif

	ll t;
	cin >> t;

	while (t--) {

		string s;
		cin >> s;

		ll n = s.length();

		ll t;
		cin >> t;  // m 

		ll b[t + 2];

		for (ll i = 1; i <= t; i++) {
			cin >> b[i];
		}

		char array[t + 2];
		// print it 1 to t in last

		sort(s.begin(), s.end());

		map<ll, ll> mp;

		for (ll i = 0; i < n; i++) {
			mp[s[i] - 'a']++;
		}

		//cout<<s<<"\n";


		ll j = n - 1;
		
		while (1) {
			vector<ll> v;
			ll count_0 = 0;
			for (ll i = 1; i <= t; i++) {
				// check for b[i] = 0;
				if (b[i] == 0) {
					count_0++;
					v.push_back(i);
				}
			}

			if (count_0 == 0) {
				break;
			}

			//watch2(count_0,j);
			// use these count_0 and move on j
			if(mp[s[j]-'a'] < count_0){
				j = j - mp[s[j] - 'a'];
				continue;
			}
			
			ll pointer = j;
			j = j - mp[s[j] - 'a'];


			// fill all current 0's and mark others -ive
			for (ll i = 1; i <= t; i++) {
				if (b[i] == 0) {
					array[i] = s[pointer--];
					b[i] = -1;
				} else {
					for (ll j = 0; j < v.size(); j++) {
						b[i] = b[i] - abs(i - v[j]);
					}
				}

			}
		}

		for (ll i = 1; i <= t; i++) {
			cout << array[i];
		} cout << "\n";

	}


	return 0;
}
