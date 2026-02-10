#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2000000;
vector<int> primes;
vector<bool> is_prime;
void sieve() {
is_prime.assign(MAXN + 1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i * i <= MAXN; i++) {
    if (is_prime[i]) {
        for (int j = i * i; j <= MAXN; j += i)
            is_prime[j] = false;
    }
}
for (int i = 2; i <= MAXN; i++)
    if (is_prime[i]) primes.push_back(i);

}
int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

sieve();

int t;
cin >> t;
while (t--) {
    long long d;
    cin >> d;

    long long p = 0, q = 0;

    
    for (int x : primes) {
        if (x >= 1 + d) {
            p = x;
            break;
        }
    }

    
    for (int x : primes) {
        if (x >= p + d) {
            q = x;
            break;
        }
    }

    cout << p * q << "\n";
}

}
