#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    int cnt = 0;
    for (int i = 0; i < k; i++)
    {
        if (a[i] == '0')
            cnt++;
    }

    if (a[k] == '1' && cnt==0)
        cnt++;
    cout << cnt << endl;
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
