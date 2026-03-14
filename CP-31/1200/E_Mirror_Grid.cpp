#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> a(n + 1, vector<int>(n + 1));
    for (int i = 0; i < n; i++)

        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            a[i][j] = x - '0';
        }

    int cnt = 0;
    for (int i = 0; i < (n+1)/2; i++)
    {
        for (int j = 0; j <n/2; j++)
        {
            int s = a[i][j] + a[j][n-i-1] + a[n-i-1][n - j - 1] + a[n - j- 1][i];
            cnt += min(4 - s, s);
        }
    }
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}