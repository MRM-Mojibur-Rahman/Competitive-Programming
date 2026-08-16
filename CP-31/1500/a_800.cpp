#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl << '\n'

void solve() {
    string a;cin>>a;
    int cnt =0;
    if(a[0]!='a') cnt++;
    if(a[1]!='b') cnt++;
    if(a[2]!='c') cnt++;

    if(cnt<=2) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}