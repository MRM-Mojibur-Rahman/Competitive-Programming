#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int nonZero = 0;
    vector<int> zeros;
    for (int i = 0; i < n; i++)
    {
        int tem = a[i];
        bool f = true;
        int zero = 0;
        while (tem)
        {
            int rem = tem % 10;
            tem /= 10;
            if (rem != 0)
                f = false;
            if (f)
                zero++;
            else
                nonZero++;
        }
        if (zero)
            zeros.push_back(zero);
    }
    sort(zeros.rbegin(), zeros.rend());
    int len = zeros.size();
    for (int i = 1; i < len; i += 2)
    {
        nonZero += zeros[i];
    }

    if (nonZero >= m + 1)
    {
        cout << "Sasha\n";
        return;
    }
    cout << "Anna\n";
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
