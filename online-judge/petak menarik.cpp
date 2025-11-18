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
	int n, m, k; cin >> n >> m >> k;
	vector<vector<int>> grid(n+2, vector<int> (m+2, 1));
	FOR(i,1,n+1){
		FOR(j,1,m+1){
			cin >> grid[i][j];
		}
	}
//	cout << grid[2][2] << endl;
	bool cek = 0;
	FOR(j,1,m+1){
		FOR(i,1,n+1){
//			if(i == 2 && j == 1) cout << "ya" << endl;
			if(grid[i-1][j]*grid[i+1][j]*grid[i][j-1]*grid[i][j+1] == k){
				cout << i << " " << j << endl;
				cek = 1;
				break;
			}else if(i == n && j == m){
				cout << 0 << " " << 0 << endl;
				cek = 1;
				break;
			}
		}
		if(cek == 1) break;
	}
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
