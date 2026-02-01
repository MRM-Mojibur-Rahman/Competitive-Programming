#include <stdio.h>
#include <string.h>
#define ll long long
int main()
{
    char a[100];
    fgets(a, sizeof(a), stdin);
    int n = strlen(a);
    int word = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ' '|| i == n-1)
        {
            printf(" the lenget is ->%d\n", word);
            word = 0;
        }
        else
        {
            word++;
            printf("%c", a[i]);
        }
    }

    return 0;
}