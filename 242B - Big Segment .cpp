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
	vector<pair<int, int>> v;
	ll n;
	cin >> n;
	ll x, y;
	int min = INT_MAX, max = INT_MIN;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		if (x < min) {
			min = x;
		}
		if (y > max) {
			max = y;
		}
		v.pb(mp(x, y));
	}
	for (int i = 0; i < n; i++) {
		if (v[i].first == min && v[i].second == max) {
			cout << i + 1;
			exit(0);
		}
	}
	cout << -1;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}