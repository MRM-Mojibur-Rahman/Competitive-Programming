#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<set<int>> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].insert(y);
    }

    

    return 0;
}
