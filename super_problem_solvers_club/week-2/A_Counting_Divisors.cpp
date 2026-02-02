#include <bits/stdc++.h>
using namespace std;
#define ll long long
const  int mx = 1e6+6;
vector<int>divi(mx,0);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;cin>>n;
    for (int i = 1; i < mx; i++)
    {
        for (int j = i; j < mx; j+=i) 
        divi[j]++;
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        cout<<divi[x]<<endl;
    }
    
    return 0;
}
