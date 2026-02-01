#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<pair<ll,ll>>movies(n);
    for (int i = 0; i < n; i++)
    {
        cin>>movies[i].second>>movies[i].first;
    }
    sort(movies.begin(),movies.end());
    int ans = 0 , last= -1;
    for (int i = 0; i < n; i++)
    {
        if(last<=movies[i].second)
        {
            ans++;
            last = movies[i].first;
        }
    }
    cout<<ans<<endl;
    

    
    return 0;
}
