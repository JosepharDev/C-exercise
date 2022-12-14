/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i;
    float a[10];
    for(i = 0; i < 10; i++)
    {
        scanf("%f", &a[i]);
    }
    
    float result = 0;
    
    for(i = 0; i <10; i++)
    {
        result = result + a[i];
    }
    float m = result / 10;
    printf("%f", m);
    
    return 0;
}
