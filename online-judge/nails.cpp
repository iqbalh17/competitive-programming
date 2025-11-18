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
	int x,y,a,b; cin >> x >> y >> a >> b;
	vector<pair<int,int>> v;
	int cnt = 0;
	FOR(i,a,x+1){
		int temp = min(i,y+1);
		FOR(j,b,temp){
			if(j < i){
				v.pb(mp(i,j));
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	FOR(i,0,cnt){
		cout << v[i].F << " " << v[i].S << endl;
	}
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
