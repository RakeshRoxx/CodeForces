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
	vi v(26);
	string str;
	cin >> str;
	for (char ch : str) {
		int value = ch - 'a';
		v[value]++;
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (v[i] > 0) {
			cnt++;
		}
	}
	if (cnt % 2 == 0) {
		cout << "CHAT WITH HER!";
	} else {
		cout << "IGNORE HIM!";
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}