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

int n;
vector<int> v;
int l,r;

int boundlow(int left, int right){
	while(left<=right){
		int mid = (left + right) / 2;
		
		if(v[mid] > r){
			return min(mid, boundlow(left, mid-1));
		}else{
			return boundlow(mid+1, right);
		}
	}
	
	return left-1;
}

int boundup(int left, int right){
	while(left <= right){
		int mid = (left + right) / 2;
		
		if(v[mid] < l){
			return max(mid, boundup(mid+1, right));
		}else{
			return boundup(left, mid-1);
		}
	}
	
	return right + 1;
}

void solve() {
	cin >> n;
	v.resize(n);
	for(auto &i: v){
		cin >> i;
	}
	sort(all(v));
	int k;
	cin >> k;
	while(k--){
		cin >> l >> r;
		int left = 0, right = n-1;
		cout << (boundlow(left, right) + 1) - (boundup(left, right) + 1) + 1 << " "; 	
	}
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
