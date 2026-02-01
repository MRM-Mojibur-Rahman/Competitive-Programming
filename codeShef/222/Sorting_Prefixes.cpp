#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n;
        cin >> n;
        vector<int> v(n), s(n);

        for (auto &it : v)
            cin >> it;
        s = v;
        sort(s.begin(), s.end());
        if (v == s)
        {
            cout << 0 << endl;
            return;
        }
        for (int i = n; i >= 1; i--)
        {

            if (i != v[i - 1])
            {
                cout<<v[i-1]<<endl;
                break;
            }
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
