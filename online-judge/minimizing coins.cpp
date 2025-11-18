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
	int c,n,x;
    cin>>n>>x;
    
    vector<int> coins;
    
    FOR(i,0,n)
    {
        cin>>c;
        coins.push_back(c);
    }
    
    vector<int> dp(x+1,0);
    
    FOR(i,1,x+1){
        dp[i]=INT_MAX;
        FOR(j,0,n){
            if(i-coins[j] >= 0)
            dp[i] = min(dp[i],dp[i-coins[j]]+1);
        }
    }
    
    if(dp[x] >= INT_MAX) cout << -1 << endl;
    else cout << dp[x] << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
