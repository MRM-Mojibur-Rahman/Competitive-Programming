#include <bits/stdc++.h>
using namespace std;
#define ll long long
int msb(int x)
{

    return 31 - __builtin_clz(x);
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ans;

    int x = n ^ k;
    if ((n - 1 == 0 && x>0) || x > ((1 << (msb(n - 1) + 1)) - 1))
    {
        cout << "NO\n";
        return;
    }
    set<int> a;
    for (int i = 1; i <= n - 1; i++)
    {
        a.insert(i);
    }
    vector<int> lst;

    for (int i = 0; i < 32; i++)
    {
        if (x & (1 << i))
        {
            lst.push_back((1 << i));
            a.erase((1 << i));
        }
    }

    for (auto it : a)
        ans.push_back(it);

    ans.push_back(0);
    for (auto it : lst)
        ans.push_back(it);

    cout << "YES\n";
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
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
