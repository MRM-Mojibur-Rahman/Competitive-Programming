#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x, m;
    cin >> n >> x >> m;
    int ml = INT_MAX, mr = INT_MIN;
    bool fst = true;
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        if ((l <= x && x <= r) && fst)
        {
            fst = false;
            ml = l, mr = r;
        }
        else
        {

            if ((l <= ml && ml <= r) || (l <= mr && mr <= r))
            {
                ml = min(ml, l);
                mr = max(mr, r);
            }
        }
    }
    if (fst)
        cout << 1 << endl;
    else
        cout << mr - ml + 1 << endl;
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
