#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, p, q;
    cin >> n >> p >> q;

    vector<int> a, b;

    for(int i = 0; i < n; i++) {
    	int val;
    	cin >> val;
    	a.push_back(val);
    }

    for(int i = 0; i < n; i++) {
    	int val;
    	cin >> val;
    	b.push_back(val);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

	ll ans = 0;
    for(int val : a) {
    	int l = p - val;
    	int r = q - val;

    	ll cnt = (upper_bound(b.begin(), b.end(), r) - lower_bound(b.begin(), b.end(), l));
    	ans += cnt;
    }

	cout << ans << endl;
    return 0;
}