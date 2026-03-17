#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> expense(n), have(n);
    for (auto &it : expense)
        cin >> it;
    for (auto &it : have)
        cin >> it;
    vector<int> extra, need;
    int l = 0, r = 0, zero = 0;

    for (int i = 0; i < n; i++)
    {
        int x = have[i] - expense[i];
        if (x > 0)
            extra.push_back(x);
        else if (x < 0)
            need.push_back(abs(x));
        else
            zero++;
    }
    sort(extra.begin(), extra.end());
    sort(need.begin(), need.end());

    // cout << zero << endl;
    // for (auto it : extra)
    //     cout << it << " ";
    // cout << endl;
    // for (auto it : need)
    //     cout << it << " ";

    if (extra.size() == 0)
    {
        cout << zero / 2 << endl;
        return;
    }

    int len1 = extra.size(), len2 = need.size();
    int ans = 0, cnt = len1;
    while (l < len1 && r < len2)
    {
        if (extra[l] >= need[r])
        {
            cnt--;
            r++;
            ans++;
        }
        l++;
    }
    ans += (zero + cnt) / 2;
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
