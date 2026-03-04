#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> a;
ll swaps = 0;
bool bad = false;

pair<int,int> dfs(int l,int r)
{
    if(l == r) return {a[l], a[l]};

    int mid = (l + r) / 2;

    auto L = dfs(l, mid);
    auto R = dfs(mid + 1, r);

    int minL = L.first,  maxL = L.second;
    int minR = R.first,  maxR = R.second;

    if(maxL < minR)
    {
        // already correct
    }
    else if(maxR < minL)
    {
        swaps++;
    }
    else
    {
        bad = true;
    }

    return {min(minL,minR), max(maxL,maxR)};
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        a.resize(n);
        for(int i=0;i<n;i++) cin >> a[i];

        swaps = 0;
        bad = false;

        dfs(0,n-1);

        if(bad) cout << -1 << "\n";
        else cout << swaps << "\n";
    }
}