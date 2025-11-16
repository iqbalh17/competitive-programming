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
	string a, b; cin >> a >> b;
//	map<char,int> m;
//	m['A'] = 1;
//	m['B'] = 2;
//	m['C'] = 3;
//	m['D'] = 2;
//	m['E'] = 1;
//	int x, y;
//	x = abs(m[a[1]] - m[a[0]]);
//	y = abs(m[b[1]] - m[b[0]]);
//	if(a == "AE"){
//		x = 1;
//	}
//	if(b == "AE") y = 1;
//	if(x == y) cout << "Yes" << endl;
//	else cout << "No" << endl;
	int x = abs(a[1]-a[0]);
	int y = abs(b[1]-b[0]);
	if(x == 4) x = 1;
	else if(x == 3) x =2;
	if(y == 4) y = 1;
	else if(y == 3) y =2;
	if(x == y) cout << "Yes" << endl;
	else cout << "No" << endl;
}

signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t = 1;
        //cin >> t;
        for(int tc = 1; tc <= t; tc++) {
                Main(tc);
        }
}
