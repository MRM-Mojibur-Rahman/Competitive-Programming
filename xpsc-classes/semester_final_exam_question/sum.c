#include<stdio.h>
#include<string.h>
#define ll long long 
int main()
{
    int r ,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int *ptr = &a[0][0];
    int sum = 0 ;
    for (int i = 0; i < r*c; i++)
    {
        sum+= *ptr ;
        ptr++;
    }
    printf("%d",sum);
    
    
    return 0 ;
}