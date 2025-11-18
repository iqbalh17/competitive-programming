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

int n;
int a[100005], b[100005], c[100005];
int dp[100005][4];

int hari(int i, int l){
	 if(i == n+1) return 0;
	 if(dp[i][l] != -1) return dp[i][l];
	 int ans = 0;
	 if(l!=1) ans = max(ans, a[i] + hari(i+1, 1));
	 if(l!=2) ans = max(ans, b[i] + hari(i+1, 2));
	 if(l!=3) ans = max(ans, c[i] + hari(i+1, 3));
	 return dp[i][l] = ans;
} 

void solve() {
	cin >> n;
	FOR(i,1,n+1){
		cin >> a[i] >> b[i] >> c[i];
	}
	memset(dp, -1, sizeof(dp));
	cout << hari(1,0) << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
