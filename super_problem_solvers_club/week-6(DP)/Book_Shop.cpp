// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// #define ll long long
// const int mxsum = 1e5 + 9;
// vector<ll> price, pages;
// ll n, x;
// // vector<vector<ll>> dp(1010, vector<ll>(mxsum, -1));
// // ll knapscak(int idx, int sum)
// // {
// //     if (idx == n || sum == 0)
// //         return 0;
// //     if (dp[idx][sum] != -1)
// //         return dp[idx][sum];
// //     ll skip = knapscak(idx + 1, sum), take = 0;
// //     if (sum >= price[idx])
// //         take = knapscak(idx + 1, sum - price[idx]) + pages[idx];
// //     return dp[idx][sum] = max(skip, take);
// // }
// // the state is dp[i][j]=max(dp[i+1][sum-a[i]],dp[i+1][sum]);
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     cin >> n >> x;
//     price.resize(n);
//     pages.resize(n);
//     for (auto &it : price)
//         cin >> it;
//     for (auto &it : pages)
//         cin >> it;
//     vector<vector<ll>> dp(n + 1, vector<ll>(x + 1, 0));
//     // vector<int> nextState(x + 1, 0);
//     for (int i = n - 1; i >= 0; i--)
//     {
//         // vector<int> currentState(x + 1, 0);
//         for (int sum = 0; sum <= x; sum++)
//         {
//             int take = 0;
//             if (sum - price[i] >= 0)
//                 take = dp[i+1][sum - price[i]] + pages[i];
//             int skip =  dp[i+1][sum];
//             dp[i][sum] = max(take, skip);
//         }
//         // for(auto it:currentState) cout<<it<<" ";
//         // cout<<endl;
//         // nextState= currentState;
//     }
//     // cout << nextState[x] << endl;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <=x; j++)
//         {
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     cout<<dp[0][x];

//     // cout << knapscak(0, x) << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> price(n), pages(n);

    for (int &p : price) cin >> p;
    for (int &p : pages) cin >> p;

    vector<int> dp(x + 1, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = x; j >= price[i]; j--)
        {
            dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
        }
    }

    cout << dp[x] << "\n";
}