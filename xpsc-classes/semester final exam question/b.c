#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int len = 0;
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ' ' || str[i]=='\0')
        {
            printf(" length is %d \n", len);
            len=0;
        }
        else
        {
            printf("%c",str[i]);
            len++;
        }
    }
}