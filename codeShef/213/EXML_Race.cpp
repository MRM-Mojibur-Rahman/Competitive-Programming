#include <bits/stdc++.h>
using namespace std;

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
        int ans = 0, mx = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            int d, t;
            cin >> d >> t;
            int v = d / t;
            if (v > mx)
                mx = v, ans = i;
            else if (v == mx)
            {
                ans = min(ans, i);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
