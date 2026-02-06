#include <stdio.h>
#include <string.h>
#define ll long long
int digitCount(ll num)
{
    if (num == 0)
        return 0;
    else
        return 1 + digitCount(num /= 10);
}
int main()
{
    ll num;
    printf("Enter the number \n");
    scanf("%lld", &num);
    int digits = digitCount(num);
    printf("%d",digits);
    return 0;
}