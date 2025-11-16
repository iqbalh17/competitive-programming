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
	vector<pair<int, bool>> idx(n+1);
	vector<int> ans;
	FOR(i,0,n){
		cin >> v[i];
		idx[v[i]].F = i;
		idx[v[i]].S = 0;
	}
	int biggest = n;
	int batas = n;
	int mulai = idx[biggest].F;
	while(batas != 0){
		FOR(i,mulai,batas){
			ans.pb(v[i]);
			idx[v[i]].S = 1;
		}
		batas = mulai;
		for(int k = v[mulai]; k >= 1; k--){
			if(idx[k].S == 0){
				mulai = idx[k].F;
				break;
			}
		}
	}
	for(auto i: ans) cout << i << " ";
	cout << endl;
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
