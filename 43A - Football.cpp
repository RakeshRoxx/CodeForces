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

	string a, b, str;
	int n, cnta = 1, cntb = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			cin >> a;
			continue;
		}
		cin >> str;
		if (str != a) {
			cntb++;
			b = str;
		} else {
			cnta++;
		}
	}
	if (cnta > cntb) {
		cout << a;
	} else {
		cout << b;
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}