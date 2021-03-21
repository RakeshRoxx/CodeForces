#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vl vector<ll>
#define vi vector<int>
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

	ll t, sx, sy, ex, ey, time = -1;
	string wind;
	cin >> t >> sx >> sy >> ex >> ey;
	cin >> wind;
	for (int i = 0; i < t; i++) {
		switch (wind[i]) {
		case 'N':
			if (sy < ey) {
				sy++;
			}
			break;
		case 'S':
			if (sy > ey) {
				sy--;
			}
			break;
		case 'E':
			if (sx < ex) {
				sx++;
			}
			break;
		case 'W':
			if (sx > ex) {
				sx--;
			}
			break;
		default:
			break;
		}
		if (sx == ex && sy == ey) {
			time = i + 1;
			break;
		}
	}
	cout << time;
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}