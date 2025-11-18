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


bool cek(string &a, string &b, vin &v, int m){
	int idx = 0;
	for(int i = 0; i < a.size(); i++){
		if(v[i] <= m) continue;
		if(a[i] == b[idx]) idx++;
	}
	return idx == b.size();
}

void solve() {
	string t, p; cin >> t>> p;
	vin v(t.size());
	FOR(i,1,t.size()+1){
		int x; cin >> x;
		v[x-1] = i;
	}
	int l = 0;
	int r = t.size();
	while(r-l > 1){
		int mid = (l+r)/2;
		if(cek(t,p,v,mid)){
			l = mid;
		}else{
			r = mid;
		}
	} 
	
	cout << l << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
