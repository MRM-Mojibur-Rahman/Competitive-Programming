#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a = k % (n - 1);
        if (a == 0)
        {
            a = -1;
        }

        ll b = k / (n - 1);
        ll ans = a + (b * n);
        cout << ans << endl;
    }

    return 0;
}