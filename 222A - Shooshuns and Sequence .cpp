#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define vi vector<int>
#define MOD 1000000007
#define endl "\n"
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	int n, k;
	cin >> n >> k;
	int value, pos = 1;
	for (int i = 1; i <= n; i++) {
		int temp;
		cin >> temp;
		if (i == 1) value = temp;
		if (value != temp) {
			pos = i;
			value = temp;
		}
	}
	// cout << pos << " ";
	if (pos > k) {
		cout << "-1";
		return 0;
	}
	cout << pos - 1;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}