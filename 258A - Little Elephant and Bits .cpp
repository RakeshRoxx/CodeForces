#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define vi vector<int>
#define MOD 1000000007
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
	bool flag = false;
	int pos;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '0') {
			pos = i;
			flag = true;
			break;
		}
	}
	string ans;
	if (flag) {
		str.erase(pos, 1);
		cout << str;
	} else {
		str.pop_back();
		cout << str;
	}
	cout << ans;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}