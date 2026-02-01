#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll s, k, m;
        cin >> s >> k >> m;
        if(s<k)
        {
            cout<<s-min(s,m%k)<<endl;
        }
        else 
        {
            if((m/k)%2==0 ) cout<<s-(m%k)<<endl;
            else cout<<k-(m%k)<<endl;
        }
        
        

    }
    return 0;
}
