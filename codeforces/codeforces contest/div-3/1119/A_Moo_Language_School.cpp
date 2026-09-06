#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;

    string a;
    cin >> a;
    int ans = 0;
    for (int i = 0; i < n; i += k)
    {
        // cout<<i<<endl;
        int cnt = 0;
        for (int j = i; j < i+k; j++)
        {
            if (a[j] == '1')
                cnt++;
        }

        if (cnt == k)
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
