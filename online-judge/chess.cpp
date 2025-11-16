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
	char v, w;
	int a, b, c, d;
	cin >> v >> b >> w >> d;
	a = v, c = w;
	if((c+d) % 2 != (a+b)%2){
		 cout << "IMPOSSIBLE" << endl;
		 return;
	}
	int x = 0;
	if((a-c)%2 == -1 && c > a) {
		x--;
		cout << "halo" << endl;	
	}
	else if((a-(c-1))%2 == 1 && c < a) x++;
	x += (a - c) / 2;
	int y = (d - b)/2;
	bool yl;
	if(b > d) yl = 0;
	else yl = 1;
	char tempa = a;
	int tempb = b;
	
	if(x >= 0 && yl == 1 && a-(abs(x) + abs(y)) >= 65 && b+(abs(x) + abs(y)) <= 8){
		for(int i = 0; i < abs(x) + abs(y); i++){
			a--;
			b++;
		}	
	}else if(x >= 0 && yl == 0 && a-(abs(x) + abs(y)) >= 65 && b-(abs(x) + abs(y)) >= 1){
		for(int i = 0; i < abs(x) + abs(y); i++){
			a--;
			b--;
		}
	}else if(x <= 0 && yl == 0 && a+(abs(x) + abs(y)) <= 72 && b-(abs(x) + abs(y)) >= 1){
		for(int i = 0; i < abs(x) + abs(y); i++){
			a++;
			b--;
		}
	}else{
		for(int i = 0; i < abs(x) + abs(y); i++){
			a++;
			b++;
		}	
	}
	
	char ac = a, ca = c;
	if(a == c && b == d) cout << 1 << " " << tempa << " " << tempb << " " << ca << " " << d << endl;
	else cout << 2 << " " << tempa << " " << tempb << " " << ac << " " << b << " " << ca << " " << d << endl;
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
