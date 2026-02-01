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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> poly(n), mono(m), ans;
        for (int i = 0; i < n; i++)
            cin >> poly[i];
        for (int i = 0; i < m; i++)
            cin >> mono[i];
        int l = 0, r = 0;
        bool is = true;
        while (l < n && r < m)
        {
            if (poly[l] == 0)
            {
                ans.push_back(poly[l]);
                k++;
                l++;
            }
            else if (mono[r] == 0)
            {
                ans.push_back(mono[r]);
                k++;
                r++;
            }
            else if (poly[l] <= k)
            {
                ans.push_back(poly[l]);
                l++;
            }
            else if (mono[r] <= k)
            {
                ans.push_back(mono[r]);
                r++;
            }
            else
            {
                is = false;
                break;
            }
        }
        while (l < n)
        {
            if (poly[l] == 0)
            {
                ans.push_back(poly[l]);
                k++;
                l++;
            }
            else if (poly[l] <=k)
            {
                ans.push_back(poly[l]);
                l++;
            }
            else
            {
                is = false;
                break;
            }
        }
        while (r < m)
        {
            if (mono[r] == 0)
            {
                ans.push_back(mono[r]);
                k++;
                r++;
            }
            else if (mono[r] <= k)
            {
                ans.push_back(mono[r]);
                r++;
            }
            else
            {
                is = false;
                break;
            }
        }

        if (is)
        {
            for (int x : ans)
                cout << x << " ";
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
