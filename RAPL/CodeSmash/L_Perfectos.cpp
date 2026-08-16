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

    sort(a.begin(), a.end());

    if (n == 1)
    {
        cout << "YES\n";
        return;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i + 1] % a[i] != 0)
        {
            cout << "NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
