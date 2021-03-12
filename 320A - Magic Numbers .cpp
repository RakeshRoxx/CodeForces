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
	bool match = true;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '1' && str[i + 1] == '4' && str[i + 2] == '4') {
			// match = true;
			i += 2;
		} else if (str[i] == '1' && str[i + 1] == '4') {
			// match = true;
			i++;
		} else if (str[i] == '1') {
			// match = true;
		} else {
			match = false;
		}
	}
	if (match) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}