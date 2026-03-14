#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());
    vector<int> uninfected;
    if (m == 1)
        uninfected.push_back(n - 1);
    else
    {
        for (int i = 1; i < m; i++)
        {
            uninfected.push_back(a[i] - a[i - 1] - 1);
        }
        uninfected.push_back(n - a[m - 1] + a[0] - 1);
    }
    sort(uninfected.rbegin(), uninfected.rend());
    int d = 0, save = 0;
    // for(auto it:uninfected) cout<<it<<" ";
    for (auto it : uninfected)
    {
        if (it - d * 2 - 1 >  0)
        {
            save += (it - d * 2 - 1);
            // cout << (it - d * 2 - 1) << " ";
        }
        else if(it - d * 2==1) save++;
        else
            break;
        d += 2;
    }
    cout<<n-save<<endl;
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
