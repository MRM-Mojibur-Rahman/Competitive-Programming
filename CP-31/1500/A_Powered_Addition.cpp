#include <bits/stdc++.h>
using namespace std;
#define ll long long
int msb(int x)
{
    return 31 - __builtin_clz(x)+1;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    int mx = 0, lstmx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= lstmx)
            lstmx = a[i];
        else
        {
            mx = max(mx, msb(lstmx - a[i]));
        }
    }
    
    cout << mx << endl;
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
