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

	int n, min = INT_MAX, max = INT_MIN, step;
	cin >> n;
	int arr[n + 1], t, max_pos, min_pos;
	for (int i = 1; i <= n; i++) {
		cin >> t;
		arr[i] = t;
		if (t > max) {
			max = t;
			max_pos = i;
		}
		if (t <= min) {
			min = t;
			min_pos = i;
		}
	}
	if (max_pos > min_pos) {
		step = (max_pos - 1) + (n - min_pos) - 1;
	} else {
		step = (max_pos - 1) + (n - min_pos);
	}
	cout << step;
	// cout << max << " " << min << "\n";
	// cout << max_pos << " " << min_pos;

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}