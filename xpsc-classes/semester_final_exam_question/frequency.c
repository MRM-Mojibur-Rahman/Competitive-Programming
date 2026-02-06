#include <stdio.h> 
#define ll long long
void frequency(ll num);

int main()
{
    ll num;
    scanf("%lld", &num);
    frequency(num);
}
void frequency(ll num)
{
    int n[10];
    for (int i = 0; i < 10; i++)
        n[i] = 0;
    ll div = num;
    while (div!=0)
    {
        n[div%10]++;
        div/=10;
    }
    for (int i = 0; i < 10; i++)
    {
      if(n[i]!=0) printf("%d is appear in num = %d\n",i,n[i]);
    }
    
    
}