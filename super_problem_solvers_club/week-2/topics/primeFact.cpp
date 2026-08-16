#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve();
    int n;
    cin >> n;
    int idx = 0 ;
    // for (auto it :allpirmes)
    // {
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    
    while (n > 1)
    {
        while (n%allpirmes[idx]==0){
            cout<<allpirmes[idx]<<" ";
            n/=allpirmes[idx];}
        idx++;}

    return 0;
}
