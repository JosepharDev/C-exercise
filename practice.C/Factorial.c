#include <stdio.h>
int main()
{
    int fac, i,f;
    printf("enter a number\n");
    scanf("%d", &fac);
    f=1;
    i = fac;
    
    while (i > 0)
    {
        f = f * i;
        i--;
    }
    printf("\nfactorial of %d = %d", fac, f);
}