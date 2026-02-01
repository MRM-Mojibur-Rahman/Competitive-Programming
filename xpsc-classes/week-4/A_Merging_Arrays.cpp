#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), ans(n+m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0, j = 0, k = 0;

    while (i<n && j<m)
    {
         if(a[i]<b[j]) ans[k++]=a[i],i++;
         else ans[k++]=b[j],j++;
    }
    while(i<n)   ans[k++]=a[i],i++;
    while(j<m)  ans[k++]=b[j],j++;
    for (int x : ans)
        cout << x << " ";

    return 0;
}
