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
	int n, m; cin >> n >> m;
	int arr[m], cek[n+1];
	memset(cek, 0, sizeof(cek));
	FOR(i,0,m) cin >> arr[i];
	
	for(int i = 0; i < m; i++){
		for(int j = 1; j <= n; j++){
			if(arr[i] == j){
				cek[j]++;
				if(cek[j] == 4){
					cek[j] = 0;
				}
			}
		}
	}
	
	int cnt;
	for(int i = 1; i <= n; i++){
		if(cek[i] >= 2) cnt++;
	}
	
	cout << cnt << endl;	
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
