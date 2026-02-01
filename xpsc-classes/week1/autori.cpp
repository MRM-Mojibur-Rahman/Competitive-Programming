#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string convention;
    cin>>convention;
    string ans;
    for (int i = 0; i < convention.size(); i++)
    {
        if((convention[i]>='A'&&convention[i]<='a')&& (convention[i-1]=='-'||i==0)) ans+=convention[i];

    }
    cout<<ans<<endl;
    
    
    return 0;
}
