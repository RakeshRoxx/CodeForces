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

	int n;
	cin >> n;
	vi v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	int diff = n / 3;
	bool flag = false;
	vi ans;
	for (int i = 0; i < diff; i++) {
		if (v[i + 2 * diff] > v[i + diff] && v[i + diff] > v[i] && v[i + 2 * diff] % v[i + diff] == 0 && v[i + diff] % v[i] == 0) {
			ans.pb(v[i]);
			ans.pb(v[i + diff]);
			ans.pb(v[i + 2 * diff]);
			// cout << v[i] << " " << v[i + diff] << " " << v[i + 2 * diff] << endl;
		} else {
			flag = true;
			break;
		}
	}
	if (flag) {
		cout << -1;
	} else {
		int count = 1;
		for (int i = 0; i < n; i++) {
			cout << ans[i] << " ";
			if (count == 3) cout << endl;
			count++;
		}
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}