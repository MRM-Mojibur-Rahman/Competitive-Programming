#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 1e8+3;
vector<bool>isPrime(N+1,true);
vector<int>primes={2};
void sieve()
{
    for (ll i = 3; 1LL*i*i < N; i+=2)
    {
        if(isPrime[i])
        {
            for (ll j = i*i; j< N; j+=2*i)
            {
                isPrime[j]=false;
            }  
        }
    }
    for(ll i = 3 ; i<N ;i+=2) if(isPrime[i]) primes.push_back(i);
    
}
void solve()
{
    ll n;cin>>n;

    ll tem = n;
    ll ans =1;

    for(auto p:primes)
    {
        if(1LL * p *p >tem) break;

        if(tem%p==0)
        {
            ll sum = 1;
            ll power = 1;
            while (tem%p==0)
            {
                tem/=p;
                power*=p;
                sum+=power;
            }
            ans*=sum;
            
        }
    }
    if(tem>1)
    {
        ans*=(tem+1);
    }
    cout<<ans-n<<endl;

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}
