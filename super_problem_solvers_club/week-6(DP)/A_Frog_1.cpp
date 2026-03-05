#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 1e5;
vector<int> dp(mxn, -1);
vector<int> a;
int n;
int cost(int i)
{
    if (i == n)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int ans = INT_MAX;
    if (i + 1 <= n)
    {
        ans = min(ans, abs(a[i] - a[i + 1]) + cost(i + 1));
    }
    if (i + 2 <= n)
    {
        ans = min(ans, abs(a[i] - a[i + 2]) + cost(i + 2));
    }
    return dp[i] = ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.resize(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    
    cout << cost(1) << endl;
    return 0;
}
