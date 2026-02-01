#include<stdio.h>
#include<string.h>
#define ll long long 
int main()
{
    int n;
    scanf("%d",&n);
    int space = n-1;
    int k = 0;
    int line = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < line; j++)
        {
            if(k==10) k = 0 ;
            printf("%d ",k++);
        }
        printf("\n");
        line++;
        space--;
        
    }
    

    return 0 ;
}