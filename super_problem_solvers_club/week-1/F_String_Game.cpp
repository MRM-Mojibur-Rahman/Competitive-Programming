#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string t, s;
    cin >> t >> s;
    int n = t.size();
    vector<int> del(n);
    for (auto &it : del)
        cin >> it;

    auto ok = [&](int len)
    {
        string tem = t;
        for (int i = 0; i < len; i++)
        {
            tem[del[i]-1] = '.';
        }

        // cout<<tem<<endl;
        int s_size = s.size();
        int j = 0;
        for (int i = 0; i < n && j < s_size; i++)
        {
            if(tem[i]==s[j])
            {
                j++;
            }
        }
        return j == (int)s.size();
    };
    // binary
    int l = 0, r = n, mid, ans=0;
    // ok(3);
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;

    return 0;
}
