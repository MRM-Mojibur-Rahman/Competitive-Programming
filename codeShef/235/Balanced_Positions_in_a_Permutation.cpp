#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n,ans=0;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;

    for (int i = 0; i < n; i++)
    {
        int ri = 0, li = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
                ri++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[i] > a[j])
                li++;
        }

        if (li == ri)
            ans++;
    }
    cout << ans << endl;
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
