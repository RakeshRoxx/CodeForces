#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vl vector<ll>
#define vi vector<int>
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

	string str;
	cin >> str;
	vi v(26);
	for (char ch : str) {
		int value = ch - 'a';
		v[value]++;
	}
	int oddChar = 0;
	for (int i = 0; i < 26; i++) {
		if (v[i] % 2 != 0) {
			oddChar += v[i];
		}
	}
	if (oddChar <= 1) {
		cout << "First";
	} else if (oddChar % 2 == 0) {
		cout << "Second";
	} else {
		cout << "First";
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}