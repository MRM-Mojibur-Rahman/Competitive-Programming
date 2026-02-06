#include <stdio.h>
#include <string.h>
#define ll long long
int count_digi(ll num)
{
    if (num == 0)
        return 0;
    return count_digi(num / 10) + 1;
}
int main()
{
    ll num;
    printf("Enter the number :\n");
    scanf("%lld", &num);
    int n = count_digi(num);
    printf(" %d digits are in the number \n", n);
    return 0;
}