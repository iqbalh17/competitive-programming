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

char grid[9][9];

void solve() {
	FOR(i,0,8){
		FOR(j,0,8) cin >> grid[i][j];
	}
	
	bool cek = 0;
	FOR(i,0,8){
			if(grid[0][i] == 'B'){
			FOR(j,1,8){
				if(grid[j][i] != 'B'){
					cek = 0;
					break;
				}else if(j == 7){
					cek = 1;
				}
			}
			}
			
		if(cek == 1){
			break;
		}
	}
	
	if(cek == 1) cout << "B" << endl;
	else cout << "R" << endl;
	
	
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
