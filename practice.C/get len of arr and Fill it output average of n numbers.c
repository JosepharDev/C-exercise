/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i, len;
    scanf("%d", &len); // get len of array
    float a[len];
    for(i = 0; i < len; i++)
    {
        scanf("%f", &a[i]);
    }
    
    float result = 0;
    
    for(i = 0; i <len; i++)
    {
        result = result + a[i];
    }
    float m = result / len;
    printf("%f", m);
    
    return 0;
}
