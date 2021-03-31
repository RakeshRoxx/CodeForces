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
	cout << "\n";


	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}

void solve() {
	ll n, m, t;
	cin >> n >> m;
	ll ac_min = INT_MAX, ac_max = INT_MIN;
	ll wa_min = INT_MAX;
	fo(i, n) {
		cin >> t;
		if (t < ac_min) {
			ac_min = t;
		}
		if (t > ac_max) {
			ac_max = t;
		}
	}
	fo(i, m) {
		cin >> t;
		if (t < wa_min) {
			wa_min = t;
		}
	}
	// cout << ac_min << " " << ac_max << " " << wa_min;
	if (max(2 * ac_min, ac_max) < wa_min) {
		cout << max(2 * ac_min, ac_max);
	} else {
		cout << -1;
	}
}