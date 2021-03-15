#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vl vector<ll>
#define vi vector<int>
using namespace std;
int sum(int x) {
	int ans = 0;
	for (int i = 1; i <= x; i++) {
		ans += i;
	}
	return ans;
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	multiset<int> a;
	multiset<int, greater<int>> b;
	for (int i = 0; i < m; i++) {
		int t;
		cin >> t;
		a.insert(t);
		b.insert(t);
	}
	int min_value = 0, max_value = 0;

	for (int i = 0; i < n; i++) {
		int k = *b.begin();
		max_value += k;
		b.erase(b.lower_bound(k));
		--k;
		if (k > 0) {
			b.insert(k);
		}
	}
	for (int i = 0; i < n; i++) {
		int k = *a.begin();
		min_value += k;
		a.erase(a.lower_bound(k));
		--k;
		if (k > 0) {
			a.insert(k);
		}
	}
	cout << max_value << " " << min_value;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}