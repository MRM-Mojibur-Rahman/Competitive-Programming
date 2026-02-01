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
        int n;cin>>n;
        if(__builtin_popcount(n)%2==0) cout<<"EVEN\n";
        else cout<<"ODD\n";
    }
    return 0;
}
