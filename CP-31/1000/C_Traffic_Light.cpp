#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    string a;
    cin >> a;
    vector<int> green;
    int fst = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'g')
        {
            if (fst == -1)
                fst = i;

            green.push_back(i);
        }
    }
    green.push_back(fst + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == c)
        {
            auto it = lower_bound(green.begin(), green.end(), i);
            ans = max(ans, *it - i);
        }
    }
    cout << ans << endl;
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
