#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());
    ll i = 1;
    for (; i <= 57; i++)
    {
        set<ll> s;
        for (auto it : a)
        {
            s.insert(it % (1LL << i));
        }
        if (s.size() == 2)
        {
            break;
        }
    }
    cout << (1LL<< i) << endl;
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
