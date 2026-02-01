#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<int, int> is;
    for (auto &it : a)
    {
        cin >> it;
        is[it]++;
    }
    for (auto &it : b)
        cin >> it;
    for (int i = n; i >= 0; i--)
    {
        if (a[i] > b[i])
        {
            cout << "No\n";
            return;
        }
        else
        {
            auto it = is.lower_bound(b[i]);
            if (it != is.begin())
            {
                it--;
                if (it->second - 1 > 0 && it->first >= a[i])
                {
                    cout << "No\n";
                    return;
                }
            }
        }
        is[b[i]]--;
    }
    cout << "Yes\n";
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
