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

	int n;
	cin >> n;
	int curr_pass = 0;
	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		curr_pass += (y - x);
		if (curr_pass > ans) {
			ans = curr_pass;
		}
	}
	cout << ans;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}