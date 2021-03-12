#include <iostream>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif
//different approch
	// string a, b;
	// cin >> a >> b;
	// reverse(a.begin(), a.end());
	// if (a == b) {
	// 	cout << "YES";
	// } else {
	// 	cout << "NO";
	// }





	string s, t;
	cin >> s >> t;
	int l1 = s.length();
	int l2 = t.length();
	if (l1 != l2) {
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < l1; i++) {
		if (s[i] != t[l1 - i - 1]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}