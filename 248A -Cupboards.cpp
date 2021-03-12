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

	int t;
	cin >> t;
	int x, y;
	ll lo = 0, lc = 0, ro = 0, rc = 0;
	while (t--)
	{
		cin >> x >> y;
		if (x == 0) {
			lc++;
		} else {
			lo++;
		}
		if (y == 0) {
			rc++;
		} else {
			ro++;
		}
	}
	ll time = min(lo, lc);
	time += min(ro, rc);
	cout << time;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}