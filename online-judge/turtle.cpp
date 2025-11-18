#include <bits/stdc++.h>
using namespace std;

signed main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		vector<vector<bool>> v(55, vector<bool>(55, false));
		int bx, by;
		for(int i = 0; i < n; i++) {
			if(i == 0) {
				int x, y; cin >> x >> y;
				v[x][y] = true;
				bx = x;
				by = y;
			} else {
				int x, y; cin >> x >> y;
				if(bx == x) {
					if(y < by) {
						for(int i = y; i <= by; i++) {
							v[x][i] = true;
						}
					} else {
						for(int i = y; i >= by; i--) {
							v[x][i] = true;
						}
					}
				} else if(by == by) {
					if(x < bx) {
						for(int i = x; i <= bx; i++) {
							v[i][y] = true;
						}
					} else {
						for(int i = x; i >= bx; i--) {
							v[i][y] = true;
						}
					}
				}
			}
		}
//		for(int i = 0; i <= 50; i++) {
//			int f = -1, l = -1;
//			for(int j = 0; j <= 50; j++) {
//				if(f==-1 && v[i][j]) {
//					f = j;
//					l = j;	
//				}
//				else if(f!=-1 && v[i][j]) {
//					l = j;
//				}
//			}
//			if()
//			for(int j = f; j <= l; j++) {
//				v[i][j] = true;
//			}
//		}
		int count = 0;
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < 10; j++) {
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
		for(int i = 0; i <= 50; i++) {
			for(int j = 0; j <= 50; j++) {
				if(v[i][j] && v[i+1][j] && v[i][j+1] && v[i+1][j+1]) count++;
			}
		}
		cout << count << endl;
	}
}