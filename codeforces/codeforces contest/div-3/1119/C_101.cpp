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

    int l = -1, r = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1 || a[i] == -1)
        {
            l = i;
            a[i] = 1;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1 || a[i] == -1)
        {
            r = i;
            a[r] = 1;
            break;
        }
    }

    if (l == r || (l == -1 && r == -1))
    {
        for (auto it : a)
            cout << it << " ";
        cout << endl;
        return;
    }

    for (int i = l + 1; i < r; i++)
    {
        if (a[i] == -1)
            a[i] = 0;
    }
      for (auto it : a)
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
