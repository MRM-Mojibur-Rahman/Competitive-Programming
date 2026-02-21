#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int total = 0;
    for (int x : a) total |= x;

    auto ok = [&](int k) {
        vector<int> cnt(31, 0);

        auto add = [&](int x){
            for (int b = 0; b < 31; b++)
                if (x & (1 << b)) cnt[b]++;
        };

        auto remove = [&](int x){
            for (int b = 0; b < 31; b++)
                if (x & (1 << b)) cnt[b]--;
        };

        auto get_or = [&](){
            int v = 0;
            for (int b = 0; b < 31; b++)
                if (cnt[b] > 0) v |= (1 << b);
            return v;
        };

        
        for (int i = 0; i < k; i++) add(a[i]);
        if (get_or() != total) return false;

        for (int i = k; i < n; i++) {
            add(a[i]);
            remove(a[i - k]);
            if (get_or() != total) return false;
        }
        return true;
    };

    int l = 1, r = n, ans = n;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else l = mid + 1;
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