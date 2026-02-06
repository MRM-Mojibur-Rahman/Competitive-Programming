#include <stdio.h>
int main()
{
    int lst, fst, tmp, div;
    scanf("%d %d %d", &lst, &fst, &div);
    if (fst>lst)
    {
        tmp=fst;fst=lst,lst=tmp;
    
    }
    if (fst%div)
    {
        fst+=div-(fst%div);
    }
    printf("[%d] ->[ %d]", fst , lst);
    
}