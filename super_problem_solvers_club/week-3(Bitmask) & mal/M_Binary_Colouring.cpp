#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> ans;
    if (__builtin_popcount(n) == 1)
    {
        for (int i = 0; i <= 32; i++)
        {
            if (n & (1 << i))
            {
                ans.push_back(1);
                break;
            }
            else
                ans.push_back(0);
        }
        cout << ans.size() << endl;
        for (auto it : ans)
            cout << it << " ";
    }
    else
    {
    }
    cout << endl;
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
