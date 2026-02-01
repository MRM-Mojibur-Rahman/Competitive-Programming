#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<bool>occur(26,false);
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
       occur[s[i]-'a']=true;
    }
    for (int i = 0; i < 26; i++)
    {
        if(!occur[i])
        {
            char ans = 'a'+i;
            cout<<ans<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    
    
    return 0;
}
