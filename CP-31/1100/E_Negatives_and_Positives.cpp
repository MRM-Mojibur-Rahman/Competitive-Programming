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
    int neg = 0;
    for (auto it : a)
        if (it < 0)
            neg++;
    neg %= 2;
    for (int i = 0; i < n; i++)
    {
        a[i]=abs(a[i]);
    }
    
    sort(a.begin(), a.end());
    ll sum = 0LL;
    for (auto it : a)
    {
       if(neg)
       {
        sum-=it;
        neg--;
       }
       else sum+=it;
    }
    cout << sum << endl;
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
