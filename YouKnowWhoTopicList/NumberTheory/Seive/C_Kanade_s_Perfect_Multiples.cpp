#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x] = 1;
    }

    for (auto &[x, y] : mp)
    {
        bool is = false;
        for (int i = x * 2; i <= k; i += x)
        {

            if (mp.find(i) == mp.end())
            {
                is = true;
                break;
            }
            else
            {
                mp[i] = 0;
            }
        }
        if (is)
        {
            cout<<-1<<endl;
            return;
        }
    }

    vector<int> ans;
    for (auto [x, y] : mp)
    {
        if (y == 1)
        {
            ans.push_back(x);
        }
    }
    cout << ans.size()<<endl;
    for (auto it : ans)
        cout << it << " ";
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
