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
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		sum += t;
	}
	int total_friend = n + 1, cnt = 0;
	for (int i = 1; i <= 5; i++) {
		int total_finger = sum + i;
		if (total_finger % total_friend != 1) cnt++;
	}
	cout << cnt;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}