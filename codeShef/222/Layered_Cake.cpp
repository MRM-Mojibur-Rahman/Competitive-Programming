#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> first(n), second(m);
        for (int i = 0; i < n; i++)
        {
            cin >> first[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> second[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(first[i]>second[j]) ans++;
            }
            
        }
        
        
        cout << ans << endl;
    }
    return 0;
}
