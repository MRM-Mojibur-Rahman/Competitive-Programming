#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cnt = 0;

void spf(int n)
{
    int is = 0;
    for (int i = 2; i*i<n; i++)
    {
        if(n%i==0) is++;
        while (n%i==0)
        {
            n/=i;
        }
        
    }
    if(n>1) 
    {
        is++;

    }
    if(is==2) cnt++;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        spf(i);

    }
    cout<<cnt<<endl;

    return 0;
}