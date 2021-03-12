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

	int n, min_v, max_v;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (i == 0) {
			min_v = t;
			max_v = t;
		}
		if (t > max_v) {
			cnt++;
			max_v = t;
		}
		if (t < min_v) {
			cnt++;
			min_v = t;
		}
	}
	cout << cnt;

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}