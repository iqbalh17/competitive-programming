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
bool sortfir(pair<int,int> &a, pair<int,int> &b)
{
       if(a.F==b.F) return a.S < b.S;
       else return a.F > b.F;
}

void solve() {
	int n, k; cin >> n >> k;
	vector<pair<int, int>> v(n);
	FOR(i,0,n) cin >> v[i].F >> v[i].S;
	sort(all(v), sortfir);
	int solved = v[k-1].F;
	int penal = v[k-1].S;
	int cnt = 0;
	FOR(i,0,n){
		if(v[i].F == solved && v[i].S == penal) cnt++;
	}
	cout << cnt << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
