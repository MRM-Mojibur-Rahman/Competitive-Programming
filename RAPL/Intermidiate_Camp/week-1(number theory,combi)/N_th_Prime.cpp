#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int mxn = 1e7;
    int n;
    cin >> n;
    vector<int> vist(mxn, 0),pirmes;
    for (int i = 2; i < mxn; i++)
    {
        if (!vist[i])
        {
            pirmes.push_back(i);
            for (int j = 2; i*j < mxn; j++)
            {
                vist[i*j] = 1;
            }
        }
    }
    cout<<pirmes[n-1]<<endl;

    return 0;
}
