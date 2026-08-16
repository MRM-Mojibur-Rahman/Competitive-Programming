#include<bits/stdc++.h>
using namespace std;

#define ll long double
#define nl << '\n'

const ll pi = 3.1415926536;

void solve() {
    ll a, b;
    cin >> a >> b;
    
    ll c =  (a * b) + (pi * (a * a + b * b)) / 2;
    cout << fixed << setprecision(9) << c << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}