#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 1e5 + 5;
int n;
vector<vector<ll>> days(mxn, vector<ll>(3)), dp(mxn, vector<ll>(3, -1));
// dp(mxn, vector<ll>(4, -1));
ll happy(int day, int last)
{

    if (day >= n)
        return 0;
    if (dp[day][last] != -1)
        return dp[day][last];
    ll ans = 0;
    for (int i = 0; i < 3; i++)
    {
        if (i == last)
            continue;
        ans = max(ans, days[day][i] + happy(day + 1, i));
    }
    return dp[day][last] = ans;
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++) // for recursion do 0 base
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> days[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
        dp[1][i] = days[1][i];

    for (int day = 2; day <= n; day++)
    {
        for (int cu = 0; cu < 3; cu++)
        {
            ll happy = 0;
            for (int ls = 0; ls < 3; ls++)
            {
                if (ls != cu)
                    happy = max(happy, days[day][cu] + dp[day - 1][ls]);
            }
            dp[day][cu] = happy;
        }
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]});

    return 0;
}
