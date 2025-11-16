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

int n, x;

vector<pair<int, int>> tokoA();
vector<pair<int, int>> tokoB();

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve() { 
	cin >> n >> x;
	vector<pair<int, int>> tokoA(n);
	vector<pair<int, int>> tokoB(n);
		FOR(i,0,n){
			cin >> tokoA[i].F;
			tokoA[i].S = i;
		}
		
		FOR(i,0,n){
			cin >> tokoB[i].F;
			tokoB[i].S = i;
		}
//	
	
	int Ah = 0, Bh = 0;
	int A[n], B[n];
	sort(tokoA.begin(), tokoA.end());
//	cout << tokoA[n-1].F << endl;
	for(int i = 0; i < x; i++){
		A[i] = tokoA[i].second;
		Ah += tokoA[i].first;
	}
	for(int i = 0; i < x; i++){
		B[i] = tokoA[n-1-i].second;
		Bh += tokoA[n-1-i].first;
	}
	
	sort(tokoA.begin(), tokoA.end(), sortbysec);
	
//	cout << A[0] << endl;
	for(int i = 0; i < n; i++){
		if(tokoB[i].second != A[0] && tokoA[tokoB[i].S].first > tokoB[i].F){
			Ah += tokoB[i].first;
		}else if(tokoB[i].second != A[0]){
			Ah += tokoA[i].first;
		}
		if(tokoB[i].second != B[0] && tokoA[tokoB[i].S].F < tokoB[i].F){
			Bh += tokoB[i].first;
		}else if(tokoB[i].second != B[0]){
			Bh += tokoA[i].first;
		}
	}
	
	cout << Bh << " " << Ah << endl;
	
	cout << Bh - Ah << endl;
	
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
