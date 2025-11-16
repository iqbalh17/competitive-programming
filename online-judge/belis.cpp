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
	int n, c1, c2, h; cin >> n >> c1 >> c2 >> h;
	string s; cin >> s;
//	bool oke = 1;
	int k = 0;
	FOR(i,0,s.len()){
		if(s[i] == '1'){
			k++;
		}
	}
	int x = s.len()-k;
//	if(k>x) oke = 0;
//	if(oke == 0){
//		if(h>c1){
//			
//		}
//	}
	bool oke = 0;
	int y;
	int q = c1*x;
	int r = c2*k;
	if(q > r) {
		y = min(q, (x*c2)+(x*h));
		oke = 1;
	} else{
		y = min(r, (k*c1)+(k*h));
	}
	if(oke == 1){
		cout << y + r << endl;
	}else{
		cout << y + q << endl;
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
