#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<int> one, zero;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            if (a[i] == '1')
            {
                one.push_back(i);
            }
            else
                zero.push_back(i);
        }
    }
    if (a[n - 1] == '1')
        one.push_back(n - 1);
    else
        zero.push_back(n - 1);

    vector<int> seg;
    for (int i = n - 1; i >= 1; i--)
    {
        if (b[i] != b[i - 1])
        {
            seg.push_back(i);
        }
    }
    seg.push_back(0);

    int lst1 = n, lst0 = n;
    for (auto it : seg)
    {

        if (b[it] == '1')
        {
            while (!one.empty() && one.back() > lst0)
            {
                one.pop_back();
            }

            if (one.empty())
            {
                cout << "No\n";
                return;
            }

            lst1 = one.back();
        }
        else
        {
            while (!zero.empty() && zero.back() > lst1)
            {
                zero.pop_back();
            }

            if (zero.empty())
            {
                cout << "No\n";
                return;
            }

            lst0 = zero.back();
        }
    }
    cout << "Yes\n";
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
