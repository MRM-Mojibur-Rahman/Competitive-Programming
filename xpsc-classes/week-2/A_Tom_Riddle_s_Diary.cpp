#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    unordered_set <string>seen;
      seen.reserve(2*n);
    for (int i = 0; i < n; i++)
    {
        string name;
        cin>>name;
        if(seen.find(name)==seen.end())
        {
            seen.insert(name);
             cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    
    return 0;
}
