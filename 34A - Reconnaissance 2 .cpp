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

	int n, min = INT_MAX;
	cin >> n;
	vi v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int pos;
	for (int i = 0; i < n - 1; i++) {
		if (abs(v[i] - v[i + 1]) < min) {
			min = abs(v[i] - v[i + 1]);
			pos = i;
		}
	}
	if (abs(v[n - 1] - v[0]) < min) {
		cout << n << " " << "1";
	} else {
		cout << pos + 1 << " " << pos + 2;
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}