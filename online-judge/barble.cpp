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
	int n, a, b, c; cin >> n >> a >> b >> c;
	int x = n/2;
	int temp[3];
	temp[0] = 0;
	temp[1] = 0;
	temp[2] = 0;
	bool cek = 0;
	if(c/2 != 0){
		FOR(i,1,c/2+1){
		int y = 0;
		y += 5*i;
		if(y == x){
			temp[2] = i;
			cek = 1;
		}
		FOR(j,1,b/2+1){
			y += 3*j;
			if(y == x){
				temp[2] = i;
				temp[1] = j;
				cek = 1;
			}else{
				FOR(k,1,a/2+1){
				y += 1*k;
				if(y == x){
					temp[2] = i;
					temp[1] = j;
					temp[0] = k;
					cek = 1;
					break;
				}
				}
			}
			if(cek == 1) break;
		}
		if(cek == 1) break;
	}
	}else if(b/2 != 0){
		FOR(j,1,b/2+1){
			int y = 0;
			y += 3*j;
			if(y == x){
				temp[1] = j;
				cek = 1;
			}else{
				FOR(k,1,a/2+1){
				y += 1*k;
				if(y == x){
					temp[1] = j;
					temp[0] = k;
					cek = 1;
					break;
				}
				}
			}
			if(cek == 1) break;
		}
		}else if(a/2 != 0){
			FOR(k,1,a/2+1){
				int y = 0;
				y += 1*k;
				if(y == x){
					temp[0] = k;
					cek = 1;
					break;
				}
				}
		}
	}
}
	if(cek == 1){
		FOR(i,0,temp[0]) cout << 1 << " ";
	FOR(i,0,temp[1]) cout << 3 << " ";
	FOR(i,0,temp[2]) cout << 5 << " ";
	cout << "- - - ";
	FOR(i,0,temp[2]) cout << 5 << " ";
	FOR(i,0,temp[1]) cout << 3 << " ";
	FOR(i,0,temp[0]) cout << 1 << " ";
	cout << endl;
	}else{
		cout << 0 << endl;
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
