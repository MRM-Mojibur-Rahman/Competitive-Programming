#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> nums(n, -1);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    nums.pop_front();
    nums.push_front(10);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
