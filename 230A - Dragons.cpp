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

	int s, n;
	cin >> s >> n;
	vector<pair<int , int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.pb(make_pair(a, b));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		if (v[i].first < s) {
			s += v[i].second;
		} else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}