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

	int n, m;
	cin >> n >> m;
	int arr[m - n], k = 0;
	bool flag = true;
	for (int i = n + 1; i <= m; i++) {
		flag = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) {
			arr[k++] = i;
		}
	}
	if (flag && arr[0] == m) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}