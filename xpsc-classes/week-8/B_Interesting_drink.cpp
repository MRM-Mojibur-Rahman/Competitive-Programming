#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<int> nums;
int max_lower_Than_or_equal(int x)
{
    int l = 0, r = n - 1;
    int mild = (l + r) / 2;
    int ans = 0;
    if (nums[0] >x)
    {
        return 0;
    }
    while (l <= r)
    {
        mild = (l + r) / 2;
        if (nums[mild] <= x)
        {
            ans = max(mild + 1, ans);
            l = mild + 1;
        }
        else
        {
            r = mild - 1;
        }
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    cin >> n;
    nums.resize(n);
    for (auto &it : nums)
        cin >> it;
    sort(nums.begin(), nums.end());
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        cout<<max_lower_Than_or_equal(m)<<endl;
        
    }

    return 0;
}
