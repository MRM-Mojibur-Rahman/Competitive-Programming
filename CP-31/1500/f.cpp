#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

ll p[19];


ll digit(ll n) {
	ll d = 0;
	while(n != 0) {
		d++;
		n/=10;
	}
	return d;
}
ll calc(ll num) {
	ll n = digit(num);

	ll ans = 0;
	for(int i = 2; i < n; i++) {
		ll denom = 3 * p[i];
		ll div = num / denom;
		ll a = div * (5 * p[i - 2]);
		ans += a;


		ll b = num % denom;
		ll first = (7 * p[i - 1]);

		// cout << i << " " << a << endl;
		// cout << b << endl;
		// cout << b / p[i] << endl;
		if(b / p[i] == 0) {
			first+= 2;
			ll last = 8 * p[i - 1] - 1;
			ll tmp = ((min(last, b) - first) / 6) + 1;
			if(tmp >= 0) ans+= tmp;
			// cout << first << " " << last << endl;
			// cout << tmp << endl; 
		} else if(b / p[i] == 1) {
			// cout << ((5 * p[i - 2]) / 3) + 1 << endl;
			ans += ((5 * p[i - 2]) / 3) + 1;
			first += 4;
			first+=p[i];
			ll last = ((8 * p[i - 1]) - 1) + p[i];
			ll tmp = ((min(last, b) - first) / 6) + 1;
			// cout << first << " " << last << endl;
			if(tmp >= 0) ans+= tmp;
		} else {
			ans += ((5 * p[i - 2]) / 3) + 1;
			ans += ((5 * p[i - 2]) / 3);
			first += (p[i] * 2);
			ll last = ((8 * p[i - 1]) - 1) + 2 * p[i];
			ll tmp = ((min(last, b) - first) / 6) + 1;
			if(tmp >= 0) ans+= tmp;
		}
	}

	// cout << ans << endl;
	// cout << num / p[n - 1] << endl;
	if(num / p[n - 1] >= 7) {
		ll first = 7 * p[n - 1] + 2;
		// cout << num << " " << first << endl;
		if(num < first) return ans;
		ll last = 8 * p[n - 1] - 1;
		ll tmp = ((min(last, num) - first) / 6) + 1;
		if(tmp >= 0) ans+= tmp;
	}
	return ans;
}

void solve() {
    ll a, b;
    cin >> a >> b;
    // cout << calc(a) << endl;
    cout << calc(b) - calc(a - 1) << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    p[0] = 1;
    ll tmp = 10;
    for(int i = 1; i< 19; i++) {
    	p[i] = tmp;
    	tmp *= 10;
    }
    // cout << p[18] << endl;

    // cout << calc(71) <<endl;
    int t;
    cin >> t;
    while(t--) solve();



    return 0;
}