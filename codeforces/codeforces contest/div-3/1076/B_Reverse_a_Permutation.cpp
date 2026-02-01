#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> v;

void display()
{
    for (auto it : v)
        cout << it << " ";
    cout << endl;
}
void solve()
{
    int n;
    cin >> n;
    v.resize(n);
    for (auto &it : v)
        cin >> it;
    int l = 0, r = n - 1, fnd = n;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != n - i)
            break;
        else
            fnd--;
        l++;
    }
    if (l == n && fnd == 0)
    {
        display();
        return;
    }
    for (int i = l; i < n; i++)
    {
        if (v[i] == fnd)
        {
            r = i;
            break;
        }
    }
    // cout<<l<<" "<<r<<endl;
    reverse(v.begin() + l, v.begin() + r+1);
    display();
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
