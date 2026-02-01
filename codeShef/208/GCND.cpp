#include <bits/stdc++.h>
using namespace std;

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
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        sort(nums.rbegin(), nums.rend());

        for (int i = nums[0] - 1, j = 1; j < n; i--, j++)
        {
            if (i != nums[j])
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
