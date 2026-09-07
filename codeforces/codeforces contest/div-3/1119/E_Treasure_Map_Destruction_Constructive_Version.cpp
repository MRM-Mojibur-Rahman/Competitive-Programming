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
    vector<int> diffa(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            int l = max(0, i - a[i] + 1);
            int r = min(n - 1, i + a[i] - 1);
            diffa[l]++;
            diffa[r + 1]--;
        }
    }
    vector<bool> resticted(n);
    int cur_count = 0;
    for (int i = 0; i < n; i++)
    {
        cur_count += diffa[i];
        resticted[i] = cur_count > 0;
    }
    bool posi = true;
    for (int i = 0; i < n && posi; i++)
    {
        if (a[i] >= 0)
        {
            if (i - a[i] >= 0 && !resticted[i-a[i]]) continue;
            if (i + a[i] <=n-1 && !resticted[i+a[i]]) continue;
            posi=false;
        }
    }
    if(!posi){
        cout<<-1<<endl;
        return;
    }
    for(auto it:resticted) cout<<!it;
    cout<<endl;
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
