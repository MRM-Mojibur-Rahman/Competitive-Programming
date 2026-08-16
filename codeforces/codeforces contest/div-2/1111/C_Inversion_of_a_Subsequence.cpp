#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    int ones = 0, zeros = 0, zr = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {

            if (a[i] == 1)
                ones++;
            else
                zeros++;
        }
        if (a[i] == 0 && b[i] == 0)
            zr++;
        if (a[i] == 1 && b[i] == 1)
            one++;
    }
    // cout << ones << " " << zeros << " " << zr << " " << one << endl;
    if (zeros > 0 && ones == 0 && (one == 0 || zr == 0))
    {
        cout << -1 << endl;
        return;
    }
    if (ones == 0 && zeros == 0)
        cout << 0 << endl;
    else if (ones % 2 == 1)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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
