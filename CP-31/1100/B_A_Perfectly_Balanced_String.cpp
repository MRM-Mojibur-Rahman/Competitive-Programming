
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string a;
    cin >> a;
    int n;
    n = a.size();
    set<char> s;
    map<char, int> mp;
    for (auto it : a)
        s.insert(it);
    int l = 0, r = 0;

    while (r < n)
    {
        mp[a[r]]++;

        if (r - l + 1 == s.size())
        {
            for (auto [x, y] : mp)
            {

                if (y > 1)
                {
                    cout << "NO\n";
                    return;
                }
            }
            mp[a[l]]--;
            l++;
        }
        r++;
    }
    for (auto [x, y] : mp)
    {

        if (y >= 2)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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