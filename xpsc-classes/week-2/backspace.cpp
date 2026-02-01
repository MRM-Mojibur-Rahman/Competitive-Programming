#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;
    string ans ;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '<')
        {
           if(!ans.empty()) ans.pop_back();
        }
        else ans+=a[i];
    }
    cout << ans<< endl;

    return 0;
}
