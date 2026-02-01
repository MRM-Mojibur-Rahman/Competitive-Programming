#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> min;
        for (int i = 0; i < n; i++)
        {
            int m, lan;
            cin >> m >> lan;
            if (lan == l)
                min.push_back(m);
        }
        sort(min.rbegin(), min.rend());
        if (min.size() == 0 || min.size() < k)
        {
            cout << -1 << endl;
            continue;
        }
        long long ans = 0;
        for (int i = 0; i < k; i++)
        {
            ans += min[i];
        }
        cout << ans << endl;
    }
    return 0;
}
