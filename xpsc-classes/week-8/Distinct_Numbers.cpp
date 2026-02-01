#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin>>n;
    set<int>dis;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        dis.insert(x);
    }
    cout<<dis.size()<<endl;
    
    return 0;
}
