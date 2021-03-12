#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif
	string str;
	cin >> str;
	int len = str.length();
	for (int i = 0; i < len;) {
		if (str[i] == '.') {
			cout << "0";
			i++;
		}
		if (str[i] == '-' && str[i + 1] == '.') {
			cout << "1";
			i += 2;
		}
		if (str[i] == '-' && str[i + 1] == '-') {
			cout << "2";
			i += 2;
		}
	}
	return 0;
}