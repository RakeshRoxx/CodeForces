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

	ll n, five = 0, zero = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t == 5) {
			five++;
		} else {
			zero++;
		}
	}
	if (zero == 0) {
		cout << "-1";
		return 0;
	}
	if (five < 9) {
		cout << "0";
		return 0;
	}
	int rem = five % 9;
	string str = "";
	for (int i = 0; i < five - rem; i++) {
		str += "5";
	}
	for (int i = 0; i < zero; i++) {
		str += "0";
	}
	cout << str;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}