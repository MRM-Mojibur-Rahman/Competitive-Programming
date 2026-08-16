#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;cin>>n;

    cout<<ceil(log2(n*1000000*8))<<endl;

    return 0;
}
