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

//differetn solution
	// string a, b, c, s;
	// cin >> a >> b >> c;
	// s = a + b;
	// sort(s.begin(), s.end());
	// sort(c.begin(), c.end());
	// if (s == c) {
	// 	cout << "YES";
	// } else {
	// 	cout << "NO";
	// }

	string str1, str2, str3;
	cin >> str1 >> str2 >> str3;
	vi v(26);
	for (char ch : str1) {
		int t = ch - 'A';
		v[t]++;
	}
	for (char ch : str2) {
		int t = ch - 'A';
		v[t]++;
	}
	for (char ch : str3) {
		int t = ch - 'A';
		v[t]--;
	}
	bool flag = true;
	for (int i = 0; i < 26; i++) {
		if (v[i] < 0) {
			flag = false;
			break;
		} else if (v[i] > 0) {
			flag = false;
			break;
		}
	}
	if (flag) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cout << "\n";


	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}