#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, pair<int, int>>> s(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s[i] = {x, {i + 1, i + 1}};
        }
        sort(s.begin(), s.end(), greater<pair<int, pair<int, int>>>());
        int ans = 0;
        int w = n;
        for (int i = 0; i < n; i++)
        {
            if (w == 0)
                break;
            int u1=0,u=0;
            if (s[i].second.second >= 2 && w >= 2)
            {
                ans += s[i].first * 2, w -= 2;
                u1=1,u=1;
            }
            else
                ans += s[i].first, w--,u1=1,u=1;
            for (int j = n - 1; j > i; j--)
            {

                if (s[i].second.first > s[j].second.first)
                {
                    if (u1)
                    {
                        u1=0;
                        s[j].second.second--;
                    }
                }
                else
                {
                    s[j].second.second -= u;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
