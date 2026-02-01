#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n ;cin>>n;
        set<int>v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.insert(x);
        }
        auto it = v.begin();
        int val0 = *it,val1 = *(++it);
    
        if( val1-val0> val0) cout<<val1-val0<<endl;
        else cout<<val0<<endl;
        
    }
    return 0;
}
