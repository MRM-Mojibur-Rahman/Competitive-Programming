#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int>v(n,-1);
    for (int i = 0; i < n; i++)
    {
       cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"hell0\n";
    auto mx = max_element(v.begin(),v.end());
    cout<<v.begin()-mx<<endl;
    auto mn = min_element(v.begin(),v.end());
    cout<<*mn<<endl;
    
    return 0;
}
