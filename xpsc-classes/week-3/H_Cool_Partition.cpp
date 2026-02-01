#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++ ) cin>>v[i];
        set<int>cu,pre;
        int ans = 1 ;
        pre.insert(v[0]);
        for (int i = 1; i < n; i++)
        {
            cu.insert(v[i]);
            if(pre.find(v[i])!=pre.end())
            {
                pre.erase(pre.find(v[i]));
            }
            if(pre.empty())
            {
                
                pre=cu;
                ans++;
            }
            
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
