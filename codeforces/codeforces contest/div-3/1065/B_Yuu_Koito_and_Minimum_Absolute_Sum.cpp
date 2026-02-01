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
        int n;
        cin >> n;

        int difa = 0, ans = 0, val = 0;
        vector<int> v(n);
        vector<bool> ones(2, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == -1 && i == 0)
                ones[0] = true;
            if (v[i] == -1 && i == n - 1)
                ones[1] = true;
            if (v[i] == -1)
                v[i] = 0;
            if (i > 0)
                difa += v[i] - v[i - 1];
        }

        if (!ones[1] && ones[0])
        {
            if (difa > 0)
                ans = 0, v[0] = difa;
        }
        else if (!ones[0] && ones[1])
        {
            if (difa < 0)
                ans = 0, v[n - 1] = abs(difa);
        }
        else if (ones[0] && ones[1])
            ans = abs(difa), v[0] = 0, v[n - 1] = 0;
        else
            ans = abs(difa);

        cout << ans << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
