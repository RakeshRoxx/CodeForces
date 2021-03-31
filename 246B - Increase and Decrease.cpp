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
	ll 	n;
	cin >> n;
	ll sum = 0;
	fo(i, n) {
		ll t;
		cin >> t;
		sum += t;
	}
	ll ans = (sum % n == 0) ? n : n - 1;
	cout << ans;
}