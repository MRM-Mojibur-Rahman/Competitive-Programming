#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string a, b;
    cin >> a >> b;
    int ans = INT_MAX, total = a.size() + b.size();
    int len1 = a.size(), len2 = b.size();

    for (int i = 0; i < len1; i++)
    {

        for (int j = 0; j < len2; j++)
        {
            int cur = 0;
            while (cur + i < len1 && cur + j < len2 && a[i + cur] == b[j + cur])
            {
                cur++;
            }
            ans = min(total - 2*cur, ans);
        }
    }
    cout << ans << endl;
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
