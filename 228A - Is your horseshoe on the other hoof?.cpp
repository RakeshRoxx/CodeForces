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

	set<int> s;
	for (int i = 0; i < 4; i++) {
		int t;
		cin >> t;
		s.insert(t);
	}
	cout << 4 - s.size();
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}