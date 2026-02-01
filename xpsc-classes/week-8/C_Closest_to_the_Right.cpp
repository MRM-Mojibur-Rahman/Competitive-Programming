#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> nums(n), query(k);
    for (auto &it : nums)
        cin >> it;
    for (auto &it : query)
        cin >> it;
    for (auto it : query)
    {
        if (nums[0] >= it)
        {
            cout << 1 << endl;
            continue;
        }
        else if (nums[n - 1] < it)
        {
            cout << n+1 << endl;
            continue;
        }
        int l = 0, r = n - 1;
        int mild = (l + r) / 2;
        int ans = INT_MAX;
        while (l <= r)
        {
            mild = (l + r) / 2;
            if (nums[mild] >= it)
            {
                ans = min(ans, mild + 1);
                r = mild - 1;
            }
            else
                l = mild + 1;
        }
        cout << ans << endl;
    }

    return 0;
}
