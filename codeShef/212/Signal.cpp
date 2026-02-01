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
        int n;cin>>n;
        string a ;cin>>a;
        int ans = 0 ;
        bool is = false;
        for (int i = 0; i < n; i++)
        {
            if(a[i]=='0') is = true;
            if(is && a[i]=='1') ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
