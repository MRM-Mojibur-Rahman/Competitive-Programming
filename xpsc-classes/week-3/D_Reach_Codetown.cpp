#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        vector<int>consonant={1,3,5},given;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') given.push_back(i);
        }
        (consonant==given)? cout<<"YES\n":cout<<"NO\n";

        
        
    }
    return 0;
}
