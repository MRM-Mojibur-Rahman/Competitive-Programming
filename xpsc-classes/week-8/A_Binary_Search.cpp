#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, q;
vector<int> nums;
bool Binary_search(int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mild = (l + r) / 2;
        if (x == nums[mild])
            return true;
        else if (x > nums[mild])
            l = mild + 1;
        else
            r = mild - 1;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;
    nums.resize(n);
    for (auto &it : nums)
        cin >> it;
    vector<int> queueries(q);
    for (auto &it : queueries)
        cin >> it;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < q; i++)
    {
        if (Binary_search(queueries[i]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
