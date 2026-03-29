#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string a;
    cin >> a;
    int len = a.size();
    int one = 0, zero = 0;
    for (int i = 0; i < len; i++)
    {
        (a[i] == '0') ? zero++ : one++;
    }
    int use = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == '0' && one)
            use++,one--;
        else if (a[i] == '1' && zero)
            use++,zero--;
        else
            break;
    }
    cout << len - use << endl;
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
