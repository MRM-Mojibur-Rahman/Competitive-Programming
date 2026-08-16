#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (2 * m > n)
    {
        cout << "NO\n";
        return;
    }
    int idx = n - 1;
    for (int i = m - 1; i >= 0; i--)
    {
        if (b[i] > a[idx])
        {
            cout << "NO\n";
            return;
        }
        idx--;
    }
    idx =0;
    for (int i = 0; i < m; i++)
    {
        if (b[i] < a[idx])
        {
            cout << "NO\n";
            return;
        }
        idx++;

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
