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

	string str, match, ans = "YES";
	getline(cin, str);
	getline(cin, match);
	vi lower(26);
	vi upper(26);
	for (char ch : str) {
		if (ch == ' ') continue;
		if (ch >= 'A' && ch <= 'Z') {
			int value = ch - 'A';
			upper[value]++;
		}
		if (ch >= 'a' && ch <= 'z') {
			int value = ch - 'a';
			lower[value]++;
		}
	}
	for (char ch : match) {
		if (ch == ' ') continue;
		if (ch >= 'A' && ch <= 'Z') {
			int value = ch - 'A';
			if (upper[value] > 0) {
				upper[value]--;
			} else {
				ans = "NO";
				break;
			}
		}
		if (ch >= 'a' && ch <= 'z') {
			int value = ch - 'a';
			if (lower[value] > 0) {
				lower[value]--;
			} else {
				ans = "NO";
				break;
			}
		}
	}
	cout << ans;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}