#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> nums(n), que(q);
    for (auto &it : nums)
        cin >> it;
    for (auto &it : que)
        cin >> it;
    for (int i = 0; i < q; i++)
    {
        int l = 0, r = n - 1;
        int mild = (l + r) / 2;
        int ans = 0;
        if (nums[0] > que[i])
        {
            cout << 0 << endl;
            continue;
        }
        while (l <= r)
        {
            mild = (l + r) / 2;
            if (nums[mild] <= que[i])
            {
                ans = max(mild+1, ans);
                l = mild + 1;
            }
            else
            {
                r = mild - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
