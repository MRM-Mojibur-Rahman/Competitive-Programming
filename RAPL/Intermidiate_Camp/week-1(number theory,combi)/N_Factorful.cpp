#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 1e6 + 10;
vector<int> spf(mxn + 1, 0);
vector<vector<int>> a(11, vector<int>(mxn + 1, 0));
void solve()
{
    int l, r, n;
    cin >> l >> r >> n;

    cout << a[n][r] - a[n][l - 1] << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> vist(mxn + 1, 0);
    for (int i = 2; i <= mxn; i++)
    {
        if (!vist[i])
        {
            spf[i]++;
            for (int j = i + i; j <= mxn; j += i)
            {
                vist[j] = 1;
                spf[j]++;
            }
        }
    }

    for (int i = 1; i <= mxn; i++)
    {
        a[spf[i]][i]++;
    }
    a[0][1]=1;
    for (int i = 0; i <= 10; i++)
    {
        for (int j = 1; j <= mxn; j++)
        {
            a[i][j] += a[i][j - 1];
        }
    }

    while (t--)
    {
        solve();
    }
    return 0;
}
