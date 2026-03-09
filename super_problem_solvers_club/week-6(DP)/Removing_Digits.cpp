#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 1e6 + 7;
vector<int> dp(mxn, -1);
int rv(int n)
{
    if (n == 0)
        return 0;
    if (dp[n] != -1)
        return dp[n];
    int tem = n;
    int ans = INT_MAX;
    while (tem != 0)
    {
        int rem = (tem % 10);
        if (rem != 0)
            ans = min(ans, rv(n - rem) + 1);
        tem /= 10;
    }
    return dp[n] = ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> dp(n + 1, 0);
    for (int i = 0; i <= 9; i++)
    {
        dp[i] = 1;
    }
    for (int i = 10; i <= n; i++)
    {
        int tem = i;
        int ans = INT_MAX;

        while (tem != 0)
        {
            int rem = (tem % 10);
            if (rem != 0)
                ans = min(ans, dp[i - rem] + 1);
            tem /= 10;
        }
        dp[i]= ans;
    }
    cout<<dp[n]<<endl;

    // cout<<rv(n)<<endl;

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// const int mxn = 1e6 + 7;
// vector<int> dp(mxn, -1);

// int rv(int n)
// {
//     if (n == 0) return 0;

//     if (dp[n] != -1) return dp[n];

//     int tem = n;
//     int ans = INT_MAX;

//     while (tem != 0)
//     {
//         int rem = tem % 10;

//         if (rem != 0)
//             ans = min(ans, rv(n - rem) + 1);

//         tem /= 10;
//     }

//     return dp[n] = ans;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;

//     cout << rv(n) << "\n";
// }