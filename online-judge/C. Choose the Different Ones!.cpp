#include <bits/stdc++.h>

using namespace std;

// DATA TYPE
#define int     long long
#define ull     unsigned long long
#define ld      long double
#define str     string

#define endl    '\n'

// VECTOR & MAP
#define fi      first
#define se      second
#define len     length
#define pb      push_back
#define ppb     pop_back
#define pf      push_front
#define ppf     pop_front
#define lb      lower_bound
#define ub      upper_bound
#define all(v)  v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// FUNC
#define sz(x)      (int) x.size()
#define ppc(x)     __builtin_popcount(x)
#define ppcl(x)    __builtin_popcountll(x)

// CONSTANT
#define mod     1000000007 // 1e9+7
#define eps     0.000000001 // 1e-9
#define inf     2147483647 // INT_MAX
#define INF     9223372036854775807 // LLONG_MAX
// const vector<int> dx = {1,-1,0,0,1,-1,-1,1};
// const vector<int> dy = {0,0,-1,1,-1,-1,1,1};

// DEBUGGING
#define sleepfor(t)     this_thread::sleep_for(std::chrono::seconds(t))
#define trace(x)        cout<<">> "<<#x<<" : "<<x<<endl
#define trace2(x,y)     cout<<">> "<<#x<<" : "<<x<<", "<<#y<<" : "<<y<<endl
#define trace3(x,y,z)   cout<<">> "<<#x<<" : "<<x<<", "<<#y<<" : "<<y<<", "<<#z<<" : "<<z<<endl
#define trace4(a,b,c,d) cout<<">> "<<#a<<" : "<<a<<", "<<#b<<" : "<<b<<", "<<#c<<" : "<<c<<", "<<#d<<" : "<<d<<endl

// PYTHON
template<typename T> void print(T var, string end = " ") {cout << var << end;}
template<typename T> void print(vector<T> var) {for(auto i : var) {print(i);} cout << endl;}
template<typename T> void print(vector<vector<T>> var) {for(auto &i : var) {print(i);} cout << endl;}
template<typename T, typename U> void print(pair<T, U> var, string end = "\n") {cout << var.first << ' ' << var.second << end;}
template<typename T, typename U> void print(vector<pair<T, U>> var) {for(auto &i : var) {print(i);}}
template<typename T, typename U> void print(map<T, U> var) {for(auto &i : var) {print(i);}}

// MAIN CODE

void Main(int tc) {
	int a,b, k; cin >> a >> b >> k;
	int cnta = 0, cntb = 0;
	vector<int> va(a), vb(b);
	map<int,int> ma, mb;
	for(int i =0; i < a; i++){
		cin >> va[i];
		if(va[i] <= k && ma[va[i]] == 0) {
			cnta++;
			ma[va[i]] = 1;	
		}
	}
	for(int i =0; i < b; i++){
		cin >> vb[i];
		if(vb[i] <= k && mb[vb[i]] == 0){
			cntb++;
			mb[vb[i]] = 1;
		}
	}
	if(cnta < k/2 || cntb < k/2) {
		cout << "NO" << endl;
		return;	
	}
	for(int i = 1; i <= k; i++){
		if(mb[i] == 1 && ma[i] == 1){
			int x = max(cnta, cntb);
			if(x == cnta) cnta--;
			else cntb--;
		}else if(mb[i] != 1 && ma[i] != 1){
			cout << "NO" << endl;
			return;
		}
	}
	if(cnta == k/2 && cntb == k/2)cout << "YES" << endl;
	else cout << "NO" << endl;
}

signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t = 1;
        cin >> t;
        for(int tc = 1; tc <= t; tc++) {
                Main(tc);
        }
}
