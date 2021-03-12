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
	int lower = 0, upper = 0;
	for (char ch : str) {
		if (isupper(ch)) {
			upper++;
		} else {
			lower++;
		}
	}
	if (upper > lower) {
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		cout << str;
	} else if (lower > upper) {
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		cout << str;
	} else {
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		cout << str;
	}
	return 0;
}