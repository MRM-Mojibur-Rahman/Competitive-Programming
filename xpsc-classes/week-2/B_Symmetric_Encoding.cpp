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
        string endcoded;
        cin >> endcoded;
  
        set<char> allDis;
        for (int i = 0; i < n; i++)
        {
            allDis.insert(endcoded[i]);
        }
        vector<char>temp;
        for(auto x:allDis) temp.push_back(x);
        map<char,char>replace_value;
        for (int i = 0; i < temp.size(); i++)
        {
            replace_value[temp[i]]=temp[temp.size()-1-i];
        }
        string ans ;
        for (int i = 0; i < n; i++)
        {
            ans+=replace_value[endcoded[i]];
        }
        cout<<ans<<endl;
        

    }

    return 0;
}
