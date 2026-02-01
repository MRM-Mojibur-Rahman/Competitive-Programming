#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    multiset<int>ml;
    for (int i = 0; i < n; i++)
    {
       int x;
       cin>>x;
       ml.insert(x);
    }
    int ans = 0 ;
    for (int i = 1; i <= n; i++)
    {
        auto it = ml.lower_bound(i);
        if(it!=ml.end())
        {
            ans++;
            ml.erase(it);
        }
    }
    cout<<ans<<endl;
    
    
    
    return 0;
}
