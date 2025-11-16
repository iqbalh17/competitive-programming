#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define popb pop_back
#define F first
#define S second
#define len length
#define sz size
#define mp make_pair
#define all(v) v.begin(), v.end()
#define FOR(i,l,r) for(int i = l; i < r; i++)
#define FORR(i,l,r) for(int i = r; i >= l; i--)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);

int v[1000000];
int dp[1000000];

int loncat(int i, int n){
	if(i == n) return 0;
	if(dp[i] != -1) return dp[i];
	int cost = abs(v[i] - v[i+1]) + loncat(i+1, n);
	if(i+2 <= n){
		cost = min(cost, abs(v[i] - v[i+2]) + loncat(i+2, n));
	}
	return dp[i] = cost;
}

void solve() {
	int n;
	cin >> n;
	FOR(i,1,n+1){
		cin >> v[i];
	}
	memset(dp, -1, sizeof(dp));
	cout << loncat(1,n) << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
