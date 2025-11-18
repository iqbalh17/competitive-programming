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
	vector<int> v(n+1);
	vector<int> anak(n+1);
	FOR(i,1,n+1) cin >> v[i];
//	cout << v[3] << endl; 
	FOR(i,1,n+1){
		int idx = v[v[i]];
		int cnt = 0;
		while(idx != v[i]){
			idx = v[idx];
			cnt++;
		}
		anak[i] = cnt+1;
	}
	
	FOR(i,1,n+1) cout << anak[i] << " ";	
	cout << endl;
	
}

signed main() {
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
