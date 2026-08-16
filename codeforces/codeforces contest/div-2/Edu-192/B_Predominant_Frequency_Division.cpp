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
    int one = 0, two = 0, three = 0;

    int cnt = 0;
    bool fst = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 1)
            one++;
        else if (a[i] == 2)
            two++;
        else
            three++;

        if (fst)
        {
            if (one != 0 && one >= two + three)
                fst = false, cnt++, three =-(one-two-three),one = two =0;
        }
        else
        {
            if ((one != 0 || two != 0) && one + two >= three)
            {
                cnt++;
                break;
            }
        }
    }

    if (cnt >= 2)
        cout << "YES\n";
    else
        cout << "NO\n";
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
