#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vl vector<ll>
#define vi vector<int>
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
	ll min = INT_MAX;
	ll pos;
	vl v(n);
	for (int i = 0; i < n; i++) {
		ll t;
		cin >> t;
		v[i] = t;
		if (t < min) {
			min = t;
			pos = i;
		}
	}
	bool find = false;
	for (int i = pos + 1; i < n; i++) {
		if (min == v[i]) {
			find = true;
		}
	}
	if (find) {
		cout << "Still Rozdil";
	} else {
		cout << pos + 1;
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}