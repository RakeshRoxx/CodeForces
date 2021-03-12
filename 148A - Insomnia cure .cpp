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
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;
	int count = d;
	if (k == 1 || l == 1 || m == 1 || n == 1) {
		cout << d;
	} else {
		for (int i = 1; i <= d; i++) {
			if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0)) {
				count--;
			}
		}
		cout << count;
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}