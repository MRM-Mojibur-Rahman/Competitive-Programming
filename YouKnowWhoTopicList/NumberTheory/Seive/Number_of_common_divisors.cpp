#include <bits/stdc++.h>
using namespace std;
const int N = 1000000;
int divisors[N + 1];
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= N; i++)
    {
        for (int j = i; j <= N; j += i)
        {
            divisors[j]++;
        }
    }
    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int g = __gcd(a, b);
        printf("%d\n", divisors[g]);
    }

    return 0;
}