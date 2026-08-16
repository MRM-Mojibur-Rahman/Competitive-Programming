#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(3);
    for (auto &it : a)
        cin >> it;
    sort(a.begin(), a.end());

    if (a[0] < a[1] && a[0] < a[2])
        cout << a[1] << " " << a[0] << " " << a[2] << endl;
    else
        cout << -1 << endl;

    return 0;
}
