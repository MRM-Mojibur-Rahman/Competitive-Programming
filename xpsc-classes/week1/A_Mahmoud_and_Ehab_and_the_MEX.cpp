#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n>>k;
    vector<int> nums(n + 10, 0);
    int minNum = 0;
    int opt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < k && nums[x] == 0)
        {
            minNum++;
            nums[x] = 1;
        }
        if(x==k) opt++;
    }
    opt+=k-minNum;
    cout << opt << endl;

    return 0;
}
