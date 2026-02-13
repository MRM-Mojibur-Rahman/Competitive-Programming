#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, l;
        cin >> a >> b >> l;

        set<long long> ans;

        long long ax = 1;
        for (int x = 0; x <= 40; x++) {
            if (ax > l) break;

            long long by = 1;
            for (int y = 0; y <= 40; y++) {
                if (ax * by > l) break;

                long long prod = ax * by;
                if (l % prod == 0) {
                    ans.insert(l / prod);
                }

                if (by > l / b) break;
                by *= b;
            }

            if (ax > l / a) break;
            ax *= a;
        }

        cout << ans.size() << '\n';
    }
}
