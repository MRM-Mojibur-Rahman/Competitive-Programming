// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int n;
// // vector<int> a;
// // vector<int>dp(2e5+10,-1);
// // int mission(int idx)
// // {
// //     if (idx >= n)
// //         return 0;
// //     int ans = INT_MAX;
// //     if(dp[idx]!=-1) return dp[idx];

// //     ans = min(ans, mission(idx + 2) + (a[idx] == 1));
// //     ans = min(ans, mission(idx + 3) + (a[idx] == 1));

// //     if (idx + 1 < n)
// //     {
// //         ans = min(ans, mission(idx + 3) + (a[idx] == 1) + (a[idx + 1] == 1));
// //         ans = min(ans, mission(idx + 4) + (a[idx] == 1) + (a[idx + 1] == 1));
// //     }
// //     return dp[idx]= ans;
// // }
// void solve()
// {
//     cin >> n;
//     vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }

//     // a.resize(n);
//     // for (auto &it : a)
//     //     cin >> it;

//     //  fill(dp.begin(), dp.begin() + n + 5, -1);
//     // cout << mission(0) << endl;


 

// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        const int INF = 1e9;
        vector<int> dp(n + 5, INF);

        dp[0] = 0;

        for (int i = 0; i < n; i++) {
            if (dp[i] == INF) continue;

            // you kill 1
            int cost1 = a[i];
            dp[i+2] = min(dp[i+2], dp[i] + cost1);
            dp[i+3] = min(dp[i+3], dp[i] + cost1);

            // you kill 2
            if (i + 1 < n) {
                int cost2 = a[i] + a[i+1];
                dp[i+3] = min(dp[i+3], dp[i] + cost2);
                dp[i+4] = min(dp[i+4], dp[i] + cost2);
            }
        }

        cout << min({dp[n], dp[n+1], dp[n+2], dp[n+3]}) << "\n";
    }
}