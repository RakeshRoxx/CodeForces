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


	int a, b, c;
	cin >> a >> b >> c;
	int x = sqrt(a * b / c);
	int z = sqrt(b * c / a);
	int y = sqrt(c * a / b);
	// cout << x << y << z << "\n";
	cout << 4 * (x + y + z);
	cout << "\n";
	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}