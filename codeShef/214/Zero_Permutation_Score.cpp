#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll ans = 0;
        if (n <= 3)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            n -= 3;
            ans += n;
            while (n >= 2)
            {
                n -= 2;
                ans += n;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
