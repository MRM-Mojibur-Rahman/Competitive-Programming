#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;
    int n ;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    auto it = s.begin();
    it++;
    it++;
    // it++;
    cout<<*it<<endl;
    
    return 0;
}
