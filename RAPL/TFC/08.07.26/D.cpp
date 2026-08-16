#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<double> a(n);
    for (auto &it : a)
        cin >> it;
    double avg = 0;

    for (auto it : a)
        avg += it;

    avg = avg / (double)n;
    int ans = 0;
    for (auto it : a)
        if (it > avg)
            ans++;

    cout << ans << endl;
    return 0;
}
