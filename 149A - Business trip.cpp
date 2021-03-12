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

	int k;
	cin >> k;
	vi v(12);
	for (int i = 0; i < 12; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	int ans = 0;
	bool flag = true;
	int i = 0;
	while (ans < k && i != 12) {
		ans += v[i];
		i++;
	}
	if (ans >= k) {
		cout << i;
	} else {
		cout << -1;
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}