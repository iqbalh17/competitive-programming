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

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	vector<int> c(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
		c[i] = v[i];
	}
	
	sort(all(c));
	
	FOR(i,0,n-1){
		FOR(j,0,n-i-1){
			if(v[j] > v[j+1] && (v[j] + v[j+1]) % 2 == 1) swap(v[j], v[j+1]);
		}
	}                    

		
	if(v == c) cout << "YES" << endl;
	else cout << "NO" << endl;
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
