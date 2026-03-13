#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int imx = INT_MAX;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // vector<int> dp(n + 100, 0);
    // dp[1] = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     int ans = INT_MAX;
    //     for (int j = k; j >= 0; j--)
    //     {
    //         if (i - j >= 0)
    //             ans = min(ans, dp[i - k] + abs(a[i - k] - a[i]));
    //     }
    //     dp[i] = ans;
    // }
    vector<int> dp(n + 1, imx);
    dp[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 1)
            {
                dp[i] = min(dp[i],
                            dp[i - j] + abs(a[i] - a[i - j]));
            }
        }
    }
    cout << dp[n] << endl;

    return 0;
}
