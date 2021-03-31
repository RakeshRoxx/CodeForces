#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define vi vector<int>
#define fo(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define fori(a,b,c)   for ( int (a)=(b); (a)<(c); (a)++)
#define MOD 1000000007
#define endl "\n"
using namespace std;
void solve();
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	solve();

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}

void solve() {
	ll n, k;
	cin >> n >> k;
	vi v(n);
	fo(i, n) {
		cin >> v[i];
	}
	ll curr_sum = 0;
	fo(i, k) {
		curr_sum += v[i];
	}
	ll min_sum = curr_sum;
	int pos = k - 1;
	for (ll i = k; i < n; i++) {
		curr_sum += v[i] - v[i - k];
		if (curr_sum < min_sum) {
			pos = i;
			min_sum = curr_sum;
		}
	}
	// cout << min_sum << " ";
	// cout << pos << " ";
	cout << pos - k + 2;
}