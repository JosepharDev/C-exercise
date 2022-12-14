/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[6] = {2, 3, 10, 33, 10, 2};
    int *arrptr = &array;
    
    for(int i = 0; i < 6 ; i++)
    {
        printf("value of the array[%d] = %d\n", i, *(arrptr + i)); // or using array[i]
    }

    return 0;
}
