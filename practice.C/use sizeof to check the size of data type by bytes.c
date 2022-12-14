/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;
    double d = 2.4;
    float f = 2.3;
    char c = 's';
    int array[3] = {1, 2, 3};
    
    printf("size of x = %d\n", sizeof(x));
    printf("size of d = %d\n", sizeof(d));
    printf("size of f = %d\n", sizeof(f));
    printf("size of c = %d\n", sizeof(c));
    printf("size of array = %d\n", sizeof(array));

    return 0;
}
