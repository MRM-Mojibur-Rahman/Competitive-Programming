#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,t;
    cin>>n>>t;
    set<int>light;
    light.insert(0);
    light.insert(n);
    multiset<int>distance;
    distance.insert(n);
    while (t--)
    {
        int x;
        cin>>x;
        auto it = light.upper_bound(x);
        int l = *it , r = *(--it);
        distance.erase(distance.find(l-r));
        distance.insert(x-r);
        distance.insert(l-x);
        light.insert(x);
        cout<<*distance.rbegin()<<" ";
    }
    
    
    return 0;
}
