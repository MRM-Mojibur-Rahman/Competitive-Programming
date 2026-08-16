#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; 
	cin >> t; 
	while (t--) {
		int n, w; 
		cin >> n >> w; 
		vector<int> a(n);
		for (int i = 0; i < n; i++) { 
			cin >> a[i]; 
		}
		vector<int> bitsIdx(21, 0); 
		for (int i = 0; i < n; i++) { 
			int idx = 31-__builtin_clz(a[i]); 
			bitsIdx[idx]++; 
		}
		int ans = 0; 
		int cnt = 0; 
		while (cnt < n) { 
			int temp = w; 
			for (int i = 20; i >= 0; i--) { 
				while (bitsIdx[i] > 0 && (1 << i) <= temp) { 
					temp -= (1 << i); 
					bitsIdx[i]--; 
					cnt++; 
				}
			}
			ans++; 
		}
		cout << ans << endl;
	}
}

