#include <bits/stdc++.h>
using namespace std;
#define ll long long
string a, b, c;
int an, bn;
const int N = 1e3 + 6;
// vector<vector<int>> dp(N, vector<int>(N, -1));
// int making(int i, int j, int k)
// {
//     if (k == bn + an)
//         return 0;
//     if (dp[i][j] != -1)
//         return dp[i][j];
//     int ans = INT_MAX;
//     if (i < an)
//     {
//         ans = min(ans, making(i + 1, j, k + 1) + (a[i] != c[k]));
//     }
//     if (j < bn)
//     {
//         ans = min(ans, making(i, j + 1, k + 1) + (b[j] != c[k]));
//     }
//     return dp[i][j] = ans;
// }
void solve()
{
    cin >> a >> b >> c;
    an = a.size();
    bn = b.size();
    // cout << making(0, 0, 0) << endl;

    // vector<int> dp(bn + 1, 1e9);
    // dp[0] = 0;
    // for (int j = 1; j <= bn; j++)
    //     dp[j] = dp[j - 1] + (b[j - 1] != c[j - 1]);
    // for (int i = 1; i <= an; i++)
    // {
    //     dp[0] += (a[i - 1] != c[i - 1]);
    //     for (int j = 1; j <= bn; j++)
    //     {
    //         int k = i + j - 1;
    //         dp[j] = min(
    //             dp[j] + (a[i - 1] != c[k]),    // from a
    //             dp[j - 1] + (b[j - 1] != c[k]) // from b
    //         );
    //     }
    // }
    // cout << dp[bn] << endl;

    vector<vector<int>> dp(an + 1, vector<int>(bn + 1, 1e9));
    dp[0][0] = 0;

    for (int i = 0; i <= an; i++)
    {
        for (int j = 0; j <= bn; j++)
        {
            int k = i + j;
            if (i < an)
                dp[i + 1][j] = min(dp[i + 1][j], dp[i][j] + (a[i] != c[k]));
            if (j < bn)
                dp[i][j + 1] = min(dp[i][j + 1], dp[i][j] + (b[j] != c[k]));
        }
    }
    cout<<dp[an][bn]<<endl;
    for (int i = 0; i <=an; i++)
    {
         for (int j = 0; j <= bn; j++) cout<<dp[i][j]<<" ";
         cout<<endl;
    }
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        //     for (int i = 0; i < N; i++)
        //     {
        //         for (int j = 0; j < N; j++)
        //             dp[i][j] = -1;
        //     }

        solve();
    }
    return 0;
}
