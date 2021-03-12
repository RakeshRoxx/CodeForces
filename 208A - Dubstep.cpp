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
	bool flag = false;
	cin >> str;
	int len = str.size();
	for (int i = 0; i < len;) {
		if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
			i += 3;
			if (flag) {
				cout << " ";
			}
		} else {
			flag = true;
			cout << str[i];
			i++;
		}
	}
	cout << "\n";


	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}