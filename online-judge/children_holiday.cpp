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

int m,n;
int arr[1001][3];

int waktu(int v[3], int dtk){
		int perlu = v[0]*v[1]+v[2];
		int jmlbalon = (dtk/perlu)*v[1];
		if(dtk%perlu != 0){
			if(dtk >= v[0]*v[1]) jmlbalon += v[1];
			else jmlbalon += (dtk%perlu)/v[0];
		}
		return jmlbalon;
}

bool cek(int b[1001][3], int dtk){
	int result = 0;
	FOR(i,0,n){
		result += waktu(b[i], dtk);
	}
	return result >= m;
}

void solve() {
	cin >> m >> n;
//	v.resize(n);
	FOR(i,0,n){
		FOR(j,0,3){
			cin >> arr[i][j];
		}
	}
	
	if(m == 0){
	cout << 0 << endl;
	FOR(i,0,n) cout << 0 << " ";
	cout << endl;
	}
	else{
	int left = 0;
	int right = 2e9+1;
	while(right - left > 1){
	int mid = (left + right) / 2;
		if(cek(arr, mid) >= m){
			right = mid;
		}else{
			left = mid;
		}	
	}
	cout << right << endl;
	FOR(i,0,n){
		if (i>0) cout << " ";
		int x = waktu(arr[i], right);
		cout << min(x, m);
		m -= min(x,m);
	}
	}
	
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
