#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vl vector<ll>
#define vi vector<int>
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

	ll n, t, maxValue = INT_MIN, minValue = INT_MAX;
	cin >> n;
	vl v(n);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
		maxValue = max(maxValue, v[i]);
		minValue = min(minValue, v[i]);
	}
	ll maxc = 0, minc = 0;
	for (ll i = 0; i < n; i++) {
		maxc += (maxValue == v[i]);
		minc += (minValue == v[i]);
	}
	cout << (maxValue - minValue) << " ";
	if (maxValue == minValue) {
		cout << n*(n - 1) / 2;
	} else {
		cout << maxc*minc;
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}