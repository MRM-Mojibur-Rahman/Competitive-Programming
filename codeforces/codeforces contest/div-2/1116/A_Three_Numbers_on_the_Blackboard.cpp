#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    vector<int> a(3);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());

    if (a[0] + a[1] < a[2])
    {
        cout << a[1] << endl;
    }
    else
        cout << a[2] - a[0] << endl;
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
