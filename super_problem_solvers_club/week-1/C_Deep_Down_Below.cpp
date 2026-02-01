#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;

    vector<pair<ll,ll>> caves; 

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        ll need = 0;
        for (int j = 0; j < k; j++) {
            ll x;
            cin >> x;
            need = max(need, x - j);
        }
        caves.push_back({need + 1, k});
    }

    sort(caves.begin(), caves.end());

    ll cur = 0;   
    ll ans = 0;   

    for (auto [need, sz] : caves) {
        if (cur < need) {
            ans += (need - cur);
            cur = need;
        }
        cur += sz;
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
