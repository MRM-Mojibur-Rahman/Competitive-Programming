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
        int n,k;cin>>n>>k;
        vector<int>v(n);
        set<int>bits;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin>>a;
            int cnt =0 ,idx = -1;
            for (int i = 0; i < k; i++)
            {
                if(a[i]=='1') {cnt++;idx = i;}
            }
            if(cnt == 1 ) bits.insert(idx);
        }
        (bits.size()==k)?cout<<"YES\n":cout<<"NO\n";
        
    }
    return 0;
}
