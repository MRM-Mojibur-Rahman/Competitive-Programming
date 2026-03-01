#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> ans;

void knapScak(int idx, int &sum, vector<int> &a, int n, vector<int> &temp)
{

    if (sum == 0)
    {
        cout << "done\n";
        ans.push_back(temp);
        return;
    }
    if (idx == n)
        return;
    if (sum - a[idx] >= 0)
    {
        sum -= a[idx];
        temp.push_back(a[idx]);
        knapScak(idx , sum, a, n, temp);
        sum += a[idx];
        temp.pop_back();
    }
    knapScak(idx + 1, sum, a, n, temp);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &it : a)
        cin >> it;
    int sum = 0;
    cin >> sum;
    vector<int> temp;
    knapScak(0, sum, a, n, temp);
    for (auto it : ans)
    {
        for (auto x : it)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
