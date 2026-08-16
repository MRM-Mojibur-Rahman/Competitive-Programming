#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    if (n == 1)
    {
        cout << "NO\n";
        return;
    }

    int sum = a[0];
    int adP1 = 0, adN1 = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            if (a[i] == 1)
                adP1++;
            else
                adN1++;
        }
        sum += a[i];
    }

    if (sum == 0 || abs(sum)%4==0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
        return;
    }
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
