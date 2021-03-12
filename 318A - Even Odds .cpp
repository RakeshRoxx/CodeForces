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

	ll n, k;
	cin >> n >> k;
	ll even, odd;
	if (n % 2 == 0) {
		even = n / 2;
		odd = n / 2;
	} else {
		odd = (n + 1) / 2;
		even = n - odd;
	}
	// cout << even << " " << odd << "\n";
	// using ap series formula
	if (k > odd) {
		cout << (2 + (k - odd - 1) * 2);
	} else {
		cout << (1 + (k - 1) * 2);
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}