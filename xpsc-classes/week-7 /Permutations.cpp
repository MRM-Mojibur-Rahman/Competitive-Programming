#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    if(n==3||n==2) {cout<<"NO SOLUTION"; return 0 ;}
    vector<int>ans;
    for (int i = 2; i<= n ; i+=2)
    {
        ans.push_back(i);
    }
    for (int i = 1; i <= n; i+=2)
    {
        ans.push_back(i);
    }
    
    for(auto it : ans) cout<<it<<" ";
    return 0;
}
