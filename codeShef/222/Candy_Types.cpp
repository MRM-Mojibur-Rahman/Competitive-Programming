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
        int n;
        cin >> n;
        map<int, int> mp;
        pair<int, int> best = {0, -1};
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        for (auto it : mp)
        {
            if (it.second > best.second)
                best = it;
        }
        cout<<best.first<<endl;
    }
    return 0;
}
