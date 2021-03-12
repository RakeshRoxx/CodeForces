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

	int n; double m;
	double pos, max = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (ceil(t / m) >= max) {
			max = ceil(t / m);
			pos = i;
		}
	}
	cout << pos + 1;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}