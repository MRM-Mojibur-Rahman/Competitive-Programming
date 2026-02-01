#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        map<string, int> mp;
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            string a;
            cin >> a;
            mp[a]++;
            string temp = a;
            for (int j = 0; j < 2; j++)
            {
                for (char i = 'a'; i <= 'k'; i++)
                {
                    if (i != a[j])
                    {
                        temp[j] = i;
                        ans += mp[temp];
                    }
                }
                temp=a;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
