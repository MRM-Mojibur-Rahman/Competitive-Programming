#include <stdio.h>
#include <string.h>
#define ll long long
void min_max(ll n, int *mx, int *mn)
{
    while (n != 0)
    {
        int rem = n % 10;
        n /= 10;
        if (rem > *mx)
            *mx = rem;
        if (rem < *mn)
            *mn = rem;
    }
}
int main()
{
    ll n;
    scanf("%lld", &n);
    int mx = 0;
    int mn = 9;
    min_max(n, &mx, &mn);
    printf("The larget digit is : %d\n",mx);
    printf("The smallest digit is : %d\n",mn);

    return 0;
}