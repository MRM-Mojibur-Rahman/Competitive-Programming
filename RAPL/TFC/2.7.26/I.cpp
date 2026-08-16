#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string dig;
    cin >> dig;
    int len = dig.size();
    if (len == 1)
    {
        cout << dig[0] << endl;
        return;
    }
    for (int i = 0; i < len - 1; i++)
    {
        if (dig[i] < dig[i + 1])
        {
            swap(dig[i], dig[i + 1]);
            break;
        }
    }
    
    cout<<dig << endl;
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
