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
        set<pair<int,int>>s;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            s.insert({i,x});
            
        }
        int num = n;
        int ans = 0;
        while (n)
        {
            // cout << n << " ";
            int len = s.size();
            int cnt = 0 ;
            for (auto x: s)
            {
                if (x.second== n)
                {
                    ans+=min(cnt,len-cnt-1);
                    s.erase(x);
                    // cout<<cnt<<" "<<len-cnt-1<<" \n";
                    break;
                }
                else cnt++;

               
            }
            n--;
        }
        cout<< ans << endl;
    }
    return 0;
}
