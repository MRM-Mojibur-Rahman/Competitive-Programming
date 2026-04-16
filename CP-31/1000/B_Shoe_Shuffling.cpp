#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    map<int, deque<int>> mp;
    map<int,int>cnt;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]].push_back(i + 1);
        cnt[a[i]]++;
       
    }
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        
        if (cnt[a[i]] == 1)
        {
            cout << -1 << endl;
            return;
        }

        if(mp[a[i]].back()!=i+1)
        {
            ans[i]=mp[a[i]].back();
            mp[a[i]].pop_back();
        }
        else {
            ans[i]=mp[a[i]].front();
            mp[a[i]].pop_front();
        }
    }
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
