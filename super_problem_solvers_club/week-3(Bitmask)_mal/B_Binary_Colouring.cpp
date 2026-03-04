#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;
    vector<int> a(31);

    for (int i = 0; i < 31; ++i) {
        int y = x & 3;       

        if (y < 3) {
            a[i] = x & 1;
        } else {
           
            a[i] = -1;
            x += 2;           
        }

        x >>= 1;
    }


    while (!a.empty() && a.back() == 0) a.pop_back();

    cout << a.size() << "\n";
    for (int v : a) cout << v << " ";
    cout << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}