#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    deque<int>ans;
    int s = n%2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        if(i%2==s)
        ans.push_back(x); 
        else ans.push_front(x);
    }
    for(auto x: ans) cout<<x<<" ";

    
    return 0;
}
