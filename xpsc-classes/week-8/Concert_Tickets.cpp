#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    multiset<ll> tickets;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        tickets.insert(x);
    }
    while (m--) {
        ll price;
        cin >> price;
        auto it = tickets.upper_bound(price);

        if (it == tickets.begin()) {
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            tickets.erase(it); 
        }
    }
}


