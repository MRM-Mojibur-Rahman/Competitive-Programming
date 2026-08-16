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
    sort(a.rbegin(), a.rend());

    for (int i = 2; i < n; i++)
    {
        if (a[i] != (a[i - 2] % a[i - 1]))
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << a[0] << " " << a[1] << endl;
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
