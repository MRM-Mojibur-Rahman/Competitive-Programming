#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int k = 0;
    for (char c : s)
        if (c == '<')
            k++;

    vector<int> ans(n);
    ans[0] = k + 1;

    int low = k, high = k+2;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '<') {
            ans[i + 1] = low;
            low--;
        } else {
            ans[i + 1] = high;
            high++;
        }
    }

    for (int x : ans)
        cout << x << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}