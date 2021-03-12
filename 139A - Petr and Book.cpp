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


	int n;
	cin >> n;
	vi v(8);
	for (int i = 1; i <= 7; i++) {
		cin >> v[i];
	}
	int day = 1, ans;
	while (n > 0) {
		if (n > 0 && day > 7) {
			day = 1;
		}
		n -= v[day];
		if (n <= 0) {
			ans = day;
			break;
		}
		day++;
	}
	cout << ans;
	cout << "\n";


	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}