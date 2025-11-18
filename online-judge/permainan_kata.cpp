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
	string arr[3][n];
	map<string, int> hitung;
	FOR(i,0,3){
		FOR(j,0,n){
			cin >> arr[i][j];
				hitung[arr[i][j]]++;	
		} 
	}
//	cout << hitung["def"] << endl;
	int a = 0, b = 0, c = 0;
		FOR(j,0,n){
			if(hitung[arr[0][j]] == 3) a += 0;
			else if(hitung[arr[0][j]] == 2) a+= 1;
			else a += 3;
		}
		FOR(j,0,n){
			if(hitung[arr[1][j]] == 3) b += 0;
			else if(hitung[arr[1][j]] == 2) b+= 1;
			else b += 3;
		}
		FOR(j,0,n){
			if(hitung[arr[2][j]]==3) c += 0;
			else if(hitung[arr[2][j]] == 2) c += 1;
			else c += 3;
		}
		
		cout << a << " " << b << " " << c << endl;
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
