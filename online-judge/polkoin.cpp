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
	int temp = n/3;
	int temp2 = 0;
//	cout << temp << endl;
//	FOR(i,temp,temp+100){
////		cout << i << endl;
//		if((temp*2) + i == n){
//			temp2 = i;
//			break;
//		}
//	}
	if((temp)+(temp*2) == n){
		temp2 = temp;
		cout << temp << " " << temp << endl;	
	} 
	else{
		temp2 = temp+1;
		if(temp2*2+temp == n) cout << temp << " " << temp2 << endl;
		else cout << temp2 << " " << temp << endl;
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
