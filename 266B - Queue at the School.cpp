#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif
	int n, t;
	string str, ans;
	cin >> n >> t;
	cin >> str;
	ans = str;
	for (int j = 0; j < t; j++) {
		for (int i = 0; i < n - 1; i++) {
			if (str[i] == 'B' && str[i + 1] == 'G') {
				ans[i] = 'G';
				ans[i + 1] = 'B';
			}
		}
		str = ans;
	}
	cout << str << endl;
	return 0;
}