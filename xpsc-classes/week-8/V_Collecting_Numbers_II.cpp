#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n>>m;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x] = i;
    }
    auto it = mp.begin();
    int prev = it->second;
    it++;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (prev > it->second)
        {
            ans++;
        }
        prev = it->second;
        it++;
    }
    cout << ans + 1 << endl;

    return 0;
}
