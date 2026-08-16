#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    auto ok = [&](int i)
    {
        int l = n * i;
        set<int> s;
        while (l)
        {
            s.insert(l % 10);
            l /= 10;
        }
        if (s.size() <= 2)
            return true;
        return false;
    };
    // for (int k = 1; k <= 10; k++)
    // {
    //     for (int i = 1; i <= 9; i++)
    //     {
    //         vector<int> a(k,);
    //     }
    // }

    cout << "No\n";
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
