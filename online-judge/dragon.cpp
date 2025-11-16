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
	int s, n;
	cin >> s >> n;
	vector<pair<int,int>> v(n);
	FOR(i,0,n){
		cin >> v[i].F >> v[i].S;
	}
	bool cek = 0;
	sort(all(v));
	FOR(i,0,n){
		if(v[i].F < s){
			s += v[i].S;
		}else{
			cout << "NO" << endl;
			cek = 1;
			break;
		}	
	}
	if(cek == 0) cout << "YES" << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
