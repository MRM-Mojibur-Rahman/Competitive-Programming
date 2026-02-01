#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string a ;cin>>a;
        set<string>ans;
        int len = a.size();
        for (int i = 0; i < len; i++)
        {
            string temp = a;
            temp.erase(i,1);
            ans.insert(temp);
        }
        cout<<ans.size()<<endl;
        
    }
    return 0;
}
