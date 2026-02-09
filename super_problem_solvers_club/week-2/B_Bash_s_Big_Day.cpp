#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MX = 100005;
vector<vector<int>> prime_divi(MX);
void pd()
{
    for (int i = 2; i < MX; i++)
    {
        if (prime_divi[i].empty())
            for (int j = i; j <= MX; j += i)
            {
                prime_divi[j].push_back(i);
            }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pd();
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        for (auto x : prime_divi[a[i]])
        {
            mp[x]++;
            // cout<<x<<" ";
        }
        // cout<<endl;
    }
    int mx = 1;
    for (auto [x, y] : mp)
        mx = max(mx, y);
    cout << mx << endl;

    return 0;
}
