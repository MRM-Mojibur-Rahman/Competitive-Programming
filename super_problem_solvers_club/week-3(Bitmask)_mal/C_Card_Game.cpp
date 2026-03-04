#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    map<int, int> al, bo;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'A')
            al[i + 1] = 1;
        else
            bo[i + 1] = 1;
    }
    

    ((al[1] && al[n]) || (al[n - 1] && al[n])||(bo.size()==1 && bo[n])) ? cout << "Alice\n" : cout << "Bob\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
