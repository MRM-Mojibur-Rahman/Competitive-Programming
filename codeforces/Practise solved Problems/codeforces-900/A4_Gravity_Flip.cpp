#include <bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
   vector<int>v(len);
    for (int i = 0; i < len; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int x : v) cout<<x<<" ";
    return 0;
}