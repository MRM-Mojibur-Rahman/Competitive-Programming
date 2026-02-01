#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    long long ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        int cu = a[i], cnt1 = 0, cnt2 = 0;
        while (i < n && a[i] == cu)
        {
            cnt1++, i++;
        }
        if (cu > b[j])
            j++;
        while (j < m && b[j] == cu)
        {
            cnt2++, j++;
        }
        ans += 1LL * cnt1 * cnt2;
    }

    cout << ans << endl;

    return 0;
}
