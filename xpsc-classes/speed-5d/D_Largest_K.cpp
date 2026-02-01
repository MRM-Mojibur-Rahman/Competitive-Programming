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
        int x,y;cin>>x>>y;
        int z = x-1;
        if(y%z==0) cout<<y/z<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
