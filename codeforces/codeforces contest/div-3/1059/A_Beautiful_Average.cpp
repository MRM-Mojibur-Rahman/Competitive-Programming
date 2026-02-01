#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>num(n);
        for (int i = 0; i < n; i++)
        {
            cin>>num[i];
        }
        sort(num.rbegin(),num.rend());
        cout<<num[0]<<endl;
        
    }
    return 0;
}
