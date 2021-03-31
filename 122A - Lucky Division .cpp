#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define vl vector<ll>
#define vi vector<int>
#define fo(a,c)   for ( int (a)=0; (a)<(c); (a)++)
#define fori(a,b,c)   for ( int (a)=(b); (a)<(c); (a)++)
#define MOD 1000000007
#define endl "\n"
using namespace std;
void solve();
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif


	solve();
	cout << "\n";


	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}

void solve() {
	int n;
	cin >> n;
	int arr[] = {4, 7, 44, 77, 47, 74, 447, 444, 474, 477, 744, 747, 774, 777};
	fo(i, 14) {
		if (n % arr[i] == 0) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}