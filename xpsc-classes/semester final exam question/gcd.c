#include <stdio.h>
#include <string.h>
#define ll long long
// int gcd(int a, int b)
// {
//     while (b!=0)
//     {
//         int temp = b;
//         b = a%b;
//         a = temp;

//     }
//     return a ;

// }
int gcd(int a, int b)
{
    if (b == 0) return a;
         return gcd(b, a % b);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("%d", ans);
    return 0;
}