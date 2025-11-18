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
	int n, m, ta, tb; cin >> n >> m;
	vin a(n), b(b);
	FOR(i,0,n){
		cin >> a[i];
		ta += a[i];
	}
	FOR(i,0,m){
		cin >> b[i];
		tb += b[i];
	}
	
	if(ta/n > tb/m){
		cout << 0 << endl;
	}else{
		int ans = -1, tmp = 0;
		for(int i = m-1; i >= 0; i--){
			if()
		}
	}
	
	
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
