#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7;
vector<bool>isPrime(N,true);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 3; i*i < N; i+=2)
    {
        if(isPrime[i])
        for (int j = i*i; j <N ; j+=i)
        {
            isPrime[j]=false;
        }
    }
    vector<int>prime;
    prime.push_back(2);
    for (int i = 3; i < N; i+=2)
    {
        if(isPrime[i]) prime.push_back(i);
    }
    
    int n;cin>>n;

    cout<<prime[n-1]<<endl;
    
    return 0;
}
