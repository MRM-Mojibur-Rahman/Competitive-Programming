#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        ll L, R;
        cin >> L >> R;
        cout << (R / 3) - ((L - 1) / 3) << "\n";
    }
    return 0;
}
