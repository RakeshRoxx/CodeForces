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

	string str;
	cin >> str;
	if (str.size() <= 7) {
		cout << "NO";
		return 0;
	}
	int count = 1, max_value = INT_MIN;
	for (int i = 0; i < str.size() - 1; i++) {
		if (str[i] == str[i + 1]) {
			count++;
		} else {
			max_value = max(max_value, count);
			count = 1;
		}
	}
	max_value = max(max_value, count);
	// cout << max_value;
	if (max_value >= 7) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}