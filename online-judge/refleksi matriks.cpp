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
	int a, b; cin >> a >> b;
	int ma[a][b];
	FOR(i,0,a){
		FOR(j,0,b){
			cin >> ma[i][j];
		}
	}
	cin >> a >> b;
	int mb[a][b];
	FOR(i,0,a){
		FOR(j,0,b){
			cin >> mb[i][j];
		} 
	}
	
	bool horizontal = 1, vertikal = 1, kanan = 1, kiri = 1, identik = 1;
	FOR(i,0,a){
		FOR(j,0,b){
			if(ma[i][j] != mb[i][j]) identik = 0;
			if(ma[i][j] != mb[a-1-i][j]) horizontal = 0;
			if(ma[i][j] != mb[i][b-1-j]) vertikal = 0;
			if(ma[i][j] != mb[j][i]) kanan = 0;
			if(ma[i][j] != mb[a-1-j][b-1-i]) kiri = 0;
		}
	}
	
	if(identik) cout << "identik" << endl;
	else if(horizontal) cout << "horisontal" << endl;
	else if(vertikal) cout << "vertikal" << endl;
	else if(kanan) cout << "diagonal kanan bawah" << endl;
	else if(kiri) cout << "diagonal kiri bawah" << endl;
	else cout << "tidak identik" << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
