#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    int gondolas = 0;

    while (l <= r) {
        if (l < r && a[l] + a[r] <= x) {
            l++; 
            r--;
        } else {
            r--;
        }
        gondolas++;
    }
    cout << gondolas << "\n";
    return 0;
}
