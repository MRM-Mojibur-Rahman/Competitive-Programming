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
        int n, l, r;
        cin >> n >> l >> r;
        deque<int> num(n);
        for (auto &it : num)
            cin >> it;
        sort(num.begin(), num.end());
        ll ans = 0;
        while (!num.empty())
        {

            int current = num.front();
            num.pop_front();
            if (current > r)
                break;
            int left = (l - current), right = (r - current);
            if (num.back() >= left)
            {
                auto itR = upper_bound(num.begin(), num.end(), right);
                auto itL = lower_bound(num.begin(), num.end(), left);
                if (itL == num.end())
                    itL = num.begin();
                ans += itR - itL;
                
            }
        }

        cout << ans << endl;
    }
    return 0;
}
