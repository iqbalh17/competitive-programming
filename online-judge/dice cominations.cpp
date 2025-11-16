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
#define vin vector<int>
#define cinvin(v) for(auto &i: v) cin >> i;

void solve() {
	int n, dp[10000000]; cin >> n;
	int x = 1e9+7;
	dp[0] = 1;
	FOR(i,1,n+1){
		for(int j = 1; j <= 6 && i-j >= 0; j++){
			dp[i]= (dp[i]+dp[i-j]) % x;
		}
	}
	cout << dp[n]<< endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
