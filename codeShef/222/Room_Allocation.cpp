#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    map<int,int>mp;
    vector<pair<int,int>>come(n);
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        mp[x]++;
        mp[y+1]--;
        come[i]={x,y};
    }
    int cur= 0,ans =-1;
    for (auto it:mp)
    {
        cur+=it.second;
        ans=max(ans,cur);
        it.second=cur;
    }
    cout<<cur<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<mp[come[i].first]<<" ";
    }
    
    
    return 0;
}
