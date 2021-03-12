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


	ll n, m;
	cin >> n >> m;
	vi v(m + 1);
	v[0] = 1;
	for (int i = 1; i <= m; i++) {
		cin >> v[i];
	}
	ll step = 0;
	for (int i = 0; i < m; i++) {
		if (v[i] <= v[i + 1]) {
			step += (v[i + 1] - v[i]);
		} else {
			step += (n - (v[i] - v[i + 1]));
		}
	}
	cout << step;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}