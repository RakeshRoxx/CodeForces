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

	string s1, s2;
	cin >> s1;
	cin >> s2;
	ll count = 0;
	char x, y;
	bool flag = false;
	if (s1.size() != s2.size()) {
		cout << "NO";
		exit(0);
	}
	for (int i = 0; i < s1.size(); i++) {
		if (s1[i] != s2[i]) {
			count++;
			if (count == 1) {
				x = s1[i];
				y = s2[i];
			}
			if (count == 2) {
				if (s1[i] == y && s2[i] == x) {
					flag = true;
				}
			}
		}
	}
	if (flag && count == 2) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}