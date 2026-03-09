#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9 + 7, mxn = 1e6 + 7;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    // vector<vector<ll>> dp(n+1, vector<ll>(x + 1));
    // vector<int>nextState(x+1,0);
    // nextState[0]=1;

    // // for (int i = 0; i < n; i++)
    // // {
    // //     dp[i][0] = 1;
    // // }
    // for (int i = n - 1; i >= 0; i--)
    // {
    // vector<int>currentState(x+1,0);
    // currentState[0]=1;

    //     for (int sum = 1; sum <= x; sum++)
    //     {
    //         ll skip = nextState[sum];
    //         ll take = ((a[i] <= sum) ? currentState[sum - a[i]] : 0);
    //         currentState[sum] = (take + skip)%mod;
    //     }
    //     nextState=currentState;
    // }

    // cout << nextState[x] << endl;
    vector<ll> dp(x + 1);
    dp[0] = 1;

    for (int coin : a)
    {
        for (int sum = coin; sum <= x; sum++)
            dp[sum] = (dp[sum] + dp[sum - coin]) % mod;
    }
    cout << dp[x] << endl;

    return 0;
}
