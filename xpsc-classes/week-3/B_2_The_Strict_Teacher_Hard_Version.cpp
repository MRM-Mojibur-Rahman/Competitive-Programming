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
        int n, m, q;
        cin >> n >> m >> q;
        set<int> teacher;
        for (int i = 0; i < m; i++)
        {
            int y;
            cin >> y;
            teacher.insert(y);
        }
        for (int i = 0; i < q; i++)
        {
            int x;
            cin >> x;
            auto l = teacher.upper_bound(x);
            if (l == teacher.begin())
            {
                cout << *l - 1 << endl;
                continue;
            }
            auto r = teacher.upper_bound(x);
            l--;
            if (r == teacher.end())
            {
                cout << n - *l << endl;

                continue;
            }

            if (*l == x)
                cout << 0 << endl;
            else
                cout << (*r - *l) / 2 << endl;
        }
    }
    return 0;
}
