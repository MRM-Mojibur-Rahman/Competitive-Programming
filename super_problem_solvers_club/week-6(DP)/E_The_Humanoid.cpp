#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<int> a;

int ans(int idx, int h, int g, int b)
{
    if (idx == n)
        return 0;
    if (!b && !g && h <= a[idx])
        return 0;
    if (a[idx] < h)
        return ans(idx + 1, h + (a[idx] / 2), g, b) + 1;
    int tem = 0;
    if (g > 0 && a[idx] < h * 2)
        tem = max(tem, ans(idx + 1, h * 2 + a[idx] / 2, g - 1, b) + 1);
    if (b > 0 && a[idx] < h * 3)
        tem = max(tem, ans(idx + 1, h * 3 + a[idx] / 2, g, b - 1) + 1);
    int nh = h*( (b!=0)? 3:1)*((g!=0)? 2*g:1);

    tem = max(tem,)
    return tem;
}
void solve()
{
    int h;
    cin >> n >> h;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cout << ans(0, h, 2, 1) << endl;
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
