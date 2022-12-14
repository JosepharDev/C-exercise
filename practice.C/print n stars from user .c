#include<stdlib.h>
#include <stdio.h>
int main(){
int i,ch,j;
printf (" Enter number : " );
scanf("%d",&ch);

for(i=1;i<ch+1;i++)
    {
    for(j=0;j<i;j++)
        {
        printf("*");
        }
    printf("\n");
}

return 0 ;
}
