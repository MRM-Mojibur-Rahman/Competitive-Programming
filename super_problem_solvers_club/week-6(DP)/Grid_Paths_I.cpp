// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// vector<string> grid;
// vector<vector<ll>>dp(1010,vector<ll>(1010,-1));
// int n;
// const ll mod = 1e9+7;
// ll path(int i, int j)
// {
//     if (i >= n || j >= n|| i<0 || j<0) return 0;
//     if(grid[i][j]=='*') return 0;
//     if(i==n-1 && j==n-1) return 1;
//     if(dp[i][j]!=-1) return dp[i][j];
//     ll ans=(path(i+1,j)+path(i,j+1))%mod;
//     return dp[i][j]=ans;
// }
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cin >> n;
//     grid.resize(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> grid[i];
//     }
//     cout << path(0, 0) << endl;

//     return 0;
// }
#include <iostream>
#include <vector>
#include <string>
using namespace std;

#define ll long long

vector<string> grid;
vector<vector<ll>> dp(1010, vector<ll>(1010, -1));

int n;
const ll mod = 1e9 + 7;

ll path(int i, int j)
{
    if (i >= n || j >= n) return 0;

    if (grid[i][j] == '*') return 0;

    if (i == n-1 && j == n-1) return 1;

    if (dp[i][j] != -1) return dp[i][j];

    ll ans = (path(i+1, j) + path(i, j+1)) % mod;

    return dp[i][j] = ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    grid.resize(n);

    for (int i = 0; i < n; i++)
        cin >> grid[i];

    cout << path(0,0) << "\n";
}