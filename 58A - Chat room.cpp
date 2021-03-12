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

	string a, b = "hello";
	cin >> a;
	int j = 0, count = 0;
	for (int i = 0; i < a.size(); i++) {
		if (a[i] == b[j]) {
			j++;
			count++;
			if (count == 5) {
				break;
			}
		}
	}
	if (count == 5) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}