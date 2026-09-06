#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e8;
vector<bool>isPrime(N,true);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 3; i*i < N; i+=2)
    {
        if(isPrime[i])
        for (int j = i*i; j <N ; j+=2*i)
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
    for (int i = 0; i < (int)prime.size(); i+=100)
    {
        cout<<prime[i]<<endl;
    }
    
    
    return 0;
}
