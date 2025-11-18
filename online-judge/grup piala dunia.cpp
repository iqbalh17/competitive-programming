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
	int n, m = 0, k = 0, se = 0, s = 0; cin >> n;
	vin v(n);
	FOR(i,0,n) cin >> v[i];
	
	sort(all(v));
	FOR(i,0,n){
		s = abs(s - (v[i] % 3));
		se += (v[i] % 3);
		m += v[i] / 3;
	}
	
	if(s != 0) cout << "NO" << endl;
	else if(n == 2 && m == 1 - (se/2)) cout << "YES" << endl;	
	else if(n == 3 && m == 3 - (se/2)) cout << "YES" << endl;
	else if(n == 4 && m == 6 - (se/2)) cout << "YES" << endl;
	else if(n == 5 && m == 10 - (se/2)) cout << "YES" << endl;
	else cout << "NO" << endl;;			
}

signed main() { fastIO
	int t = 1;  cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
