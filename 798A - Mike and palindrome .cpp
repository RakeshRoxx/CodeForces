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
	int j = str.size(), count = 0;
	for (int i = 0; i < str.size() / 2; i++) {
		if (str[i] != str[--j]) {
			count++;
		}
	}
	// cout << count;
	if (count == 0 && str.size() % 2 == 1) {
		cout << "YES";
	} else if (count == 1) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}