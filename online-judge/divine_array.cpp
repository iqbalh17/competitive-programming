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
	int arr[n+1][n];
	FOR(i,0,n){
		cin >> v[i];
	}
	FOR(i,0,n){
		arr[0][i] = v[i]; 
	}
	FOR(i,1,n+1){
		map<int, int> m;
		FOR(k,0,n){
			m[v[k]]++;
		}
		FOR(j,0,n){
			v[j] = m[v[j]];
			arr[i][j] = v[j];
		}
	}
	
	int q; cin >> q;
	while(q--){
		int x, k; cin >> x >> k;
		if(k <= n){
			cout << arr[k][x-1] << endl;
		}else{
			cout << arr[n][x-1] << endl;
		}
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
