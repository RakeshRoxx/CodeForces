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
	// vi x(n), y(n);
	int x[n], y[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		bool up = false, down = false, left = false, right = false;
		for (int j = 0; j < n; j++) {
			if (x[i] > x[j] && y[i] == y[j]) {
				left = true;
			}
			if (x[i] < x[j] && y[i] == y[j]) {
				right = true;
			}
			if (x[i] == x[j] && y[i] > y[j]) {
				down = true;
			}
			if (x[i] == x[j] && y[i] < y[j]) {
				up = true;
			}
		}
		if (up && down && left && right) {
			cnt++;
		}
	}
	cout << cnt;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}