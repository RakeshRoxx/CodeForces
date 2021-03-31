#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define vi vector<int>
#define MOD 1000000007
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	ll n;
	cin >> n;
	vi v(n);
	ll count = 1, max = INT_MIN;
	if (n == 1) {
		cout << "YES";
		exit(0);
	}
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	if (n == 2 && v[0] != v[1]) {
		cout << "YES";
		exit(0);
	}
	sort(v.begin(), v.end());
	for (ll i = 0; i < n - 1; i++) {
		if (v[i] != v[i + 1]) {
			count = 1;
		} else {
			count++;
		}
		if (count >= max) {
			max = count;
		}
	}
	// cout << max << " ";
	if (max > ((n + 1) / 2)) {
		cout << "NO";
	} else {
		cout << "YES";
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}