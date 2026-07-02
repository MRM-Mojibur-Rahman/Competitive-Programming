#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        if (a[i] > b[i])
        {
            bool f = true;
            for (int j = i; j < n; j++)
            {
                if (a[j] <= b[i])
                {
                    while (j!=i)
                    {
                        swap(a[j],a[j-1]);
                        j--;
                    }
                    
                    f = -false;
                    break;
                }
                cnt++;
            }

            if (f)
            {
                cout << "-1\n";
                return;
            }
        }

        ans += cnt;
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
