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

	ll m, n;
	cin >> n;
	vi front(n);
	for (int i = 0; i < n; i++)
		cin >> front[i];
	cin >> m;
	ll t, max = INT_MIN, count = 1;
	for (int i = 0; i < m; i++) {
		cin >> t;
		for (int j = 0; j < n; j++) {
			if (t % front[j] == 0) {
				int x = t / front[j];
				if (x > max) {
					max = x;
					count = 1;
				} else if (x == max) {
					count += 1;
				}
				break;
			}
		}
	}
	cout << count;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}