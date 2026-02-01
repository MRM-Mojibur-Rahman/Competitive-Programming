#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x]++;
        mp[y + 1]--;
    }
    vector<int> sum;
    int cnt = 0;
    for (auto [x, y] : mp)
    {
        cnt += y;
        sum.push_back(cnt);
    }
    bool is = false;
    for (auto x : sum)
    {
        if (x > 2)
            is = true;
    }
    (is) ? cout << "NO" : cout << "YES";

    return 0;
}
