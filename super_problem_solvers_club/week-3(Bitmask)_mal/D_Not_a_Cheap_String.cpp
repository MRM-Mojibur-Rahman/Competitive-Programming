#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

    string a;
    cin >> a;
    int p, n, total = 0;
    cin >> p;
    n = a.size();
    vector<pair<int,char>>vals;
    for (int i = 0; i < n; i++)
    {
        vals.push_back({a[i]-'a'+1,a[i]});
    }
    int len = vals.size();
    sort(vals.begin(),vals.end());
    map<char,int>mp;
    for (int i = 0; i < len; i++)
    {
        total+=vals[i].first;
        if(total<=p)
        mp[vals[i].second]++;
        
    }
    
    
    string ans ="\0";
    for (int i = 0; i < n; i++)
    {
        if(mp[a[i]])
        {
            ans+=a[i];
            mp[a[i]]--;
        }
    }
    cout<<ans<<endl;
    
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
