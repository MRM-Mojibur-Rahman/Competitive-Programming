#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    float ans = 0;
    while (n--)
    {
        float q, p;
        cin >> q >> p;
        ans += q * p;
    }
    cout << fixed << setprecision(3) << ans << endl;

    return 0;
}
