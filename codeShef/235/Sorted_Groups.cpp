#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    char mx = a[0];
    deque<char> mins;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < mx)
        {
            mins.push_back(a[i]);
            a[i] = '*';
        }
        else
        {
            mx = a[i];
        }
    }
    sort(mins.begin(), mins.end());
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '*')
        {
            a[i] = mins.front();
            mins.pop_front();
        }
    }
    cout << a << endl;
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
