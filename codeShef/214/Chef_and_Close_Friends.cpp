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
        int x, y , z;cin>>x>>y>>z;
        if(z>=y) cout<<2*y<<endl;
        else cout<<2*z<<endl;
    }
    return 0;
}
