#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 1e2 + 10, mxsum = 1e5 + 2;
vector<int> a(mxn);
int dp[mxn][mxsum];
int n;
int knapscak_sg(int i, int sum)
{
    if (i > n)
        return sum == 0;
    if (dp[i][sum] != -1)
        return dp[i][sum];
    int ans = 0;
    if (a[i] <= sum)
    {
        ans += knapscak_sg(i + 1, sum - a[i]);
    }
    ans += knapscak_sg(i + 1, sum);
    return dp[i][sum] = ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
            dp[i][j] = -1;
    }
    vector<int> ans;
    for (int i = 1; i <= sum; i++)
    {
        if (knapscak_sg(1, i))
            ans.push_back(i);
    }
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it << " ";

    return 0;
}
