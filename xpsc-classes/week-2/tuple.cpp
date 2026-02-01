#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tuple<int, string,vector<int>> t={1,"20333",{1,4,3}};
 

    for(auto x : get<2>(t ))
    {
        cout<<x<<endl;
    }
    return 0;
}
