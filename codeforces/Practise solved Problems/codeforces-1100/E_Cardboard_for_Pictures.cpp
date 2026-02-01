#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        ll s;
        cin >> n >> s;
        vector<ll> v(n);
        ll sum = 0;
        ll sum_sq = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            sum_sq += 1LL * v[i] * v[i]; // integer square
        }

        ll a = 4LL * n;
        ll b = 4LL * sum;
        ll c = sum_sq - s;

        long double D = 1.0L * b * b - 4.0L * a * c;
        long double sqD = sqrt(D);

        ll root1 = (-b + sqD) / (2 * a);
        ll root2 = (-b - sqD) / (2 * a);

        if (root1 != 0) cout << root1 << "\n";
        else cout << root2 << "\n";
    }
    return 0;
}
