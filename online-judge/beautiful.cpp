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
//	v[0] = 0;
//	vector<bool> cek(n+1,0);
	bool oke = 0;
	int sum = 0;
	FOR(i,0,n){
		cin >> v[i];
	}
	
	FOR(i,0,n){
		sum += v[i];
		if(v[i+1] == sum) oke = 1;
	}
	
	if(oke == 1){
		bool cek = 0;
		FOR(i,0,n-1){
			if(v[i] != v[i+1]) cek = 1;  
		}
		if(cek == 0) cout << "NO" << endl;
		else{
			int temp = v[n-1];
			int temp2;
			FORR(i,0,n-1){
				v[i] = v[i-1];
			}
			v[0] = temp;
			cout << "YES" << endl;
			for(auto i: v) cout << i << " ";
			cout << endl;
		}
	}else{
		cout << "YES" << endl;
		for(auto i: v) cout << i << " ";
		cout << endl;
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
