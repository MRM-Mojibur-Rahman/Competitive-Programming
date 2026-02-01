#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, string> ans, occur;
    for (int i = 0; i < n; i++)
    {
        string oldh, newh;
        cin >> oldh >> newh;
        if (occur.find(oldh) != occur.end())
        {
            string prev = occur[oldh];
            ans[prev] = newh;
            occur.erase(oldh);
            occur[newh] = prev;
        }
        else
        {
            ans[oldh] = newh;
            occur[newh] = oldh;
        }
    }
    cout<<ans.size()<<endl;
    for(auto val : ans)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }

    return 0;
}
