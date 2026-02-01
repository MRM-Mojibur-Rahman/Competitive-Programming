#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    vector<int>worms(n),allWorms(n,0);
    for(auto &it:worms) cin>>it;
    int juciy;
    cin>>juciy;
    allWorms[0]=worms[0];
    for (int i = 1; i < n; i++)
    {
        allWorms[i]=allWorms[i-1]+worms[i];
    }
    

    while (juciy--)
    {
        int x;
        cin>>x;
        cout<<lower_bound(allWorms.begin(),allWorms.end(),x)-allWorms.begin()+1<<endl;
    }
    
    return 0;
}
