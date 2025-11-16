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
	int r,c; cin >> r >> c;
	char arr[r][c];
	FOR(i,0,r){
		FOR(j,0,c){
			cin >> arr[i][j];
		}
	}

	int cnt = 0;
	FOR(i,0,r){
		FOR(j,0,c){
			if(arr[i][j] == 'S'){
				break;
			}else if(arr[i][j] != 'S' && j == c-1){
				FOR(k,0,c) arr[i][k] = 'B';
				cnt += c;
			}
		}
	}
	
	FOR(i,0,c){
		FOR(j,0,r){
			
			if(arr[j][i] == 'S'){
				break;
			}else if(arr[j][i] != 'S' && j == r-1){
				int kurang = 0;
				FOR(k,0,r){
					if(arr[k][i] == 'B') kurang++;
				}
				cnt += r-kurang; 
			}
		}
	}
	
	cout << cnt << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
