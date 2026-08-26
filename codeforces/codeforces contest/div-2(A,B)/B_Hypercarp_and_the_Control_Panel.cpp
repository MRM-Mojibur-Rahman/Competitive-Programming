#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    vector<pair<int, int>> blocks;

    int lst = a[0], cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != lst)
        {
            blocks.push_back({lst, cnt});
            lst = a[i];
            cnt = 1;
        }
        else
            cnt++;
    }

    blocks.push_back({lst, cnt});

    int len = blocks.size();
    int ans = len;

    int mx = 0;
    for (int i = 1; i < len; i++)
    {
        if (blocks[i].first != blocks[i - 1].first)
        {
            if (blocks[i].second >= 2 && blocks[i - 1].second >= 2)
                mx = 2;
        }
    }
    if (mx == 0)
    {
        for (int i = 1; i < len - 1; i++)
        {
            if (blocks[i].second == 1 && blocks[i - 1].first != blocks[i + 1].first &&( blocks[i-1].second >=2 ||blocks[i+1].second >=2) )
                mx = 1;
        }

        if (len > 1 && blocks[0].second == 1 && blocks[1].second >=2) mx=1;
        if (len > 1 && blocks[len-1].second == 1 && blocks[len-2].second >=2) mx=1;
    }

    cout << ans + mx << endl;
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
