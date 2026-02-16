#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &it : a)
        cin >> it;
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
                val += a[i];
            else
                val -= a[i];
        }
        if (val % 360 == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}
