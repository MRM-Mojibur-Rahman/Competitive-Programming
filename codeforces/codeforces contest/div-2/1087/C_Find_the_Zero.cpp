#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ff first
#define ss second
#define int long long
// #define endl "\n"

int query(int u, int v){
    cout << "? " << u << " " << v << endl;
    int x; cin >> x;
    return x;
}

void solve(int tst){
    int n; cin >> n;
    for(int i = 1; i < n; i++){
        int res = query(2 * i - 1, 2 * i);
        if(res){
            cout << "! " << 2 * i - 1 << endl;
            return;
        }
    }

    int res1 = query(2 * n, 2 * (n - 1)), res2 = query(2 * n, 2 * (n - 1) - 1);

    if(res1 or res2){
        cout << "! " << 2 * n << endl;
        return;
    }

    cout << "! " << 2 * n - 1 << endl;
    return;
}

signed main(){
    fastio

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}