#include <stdio.h>

int main(){
	int x, y, tem;
	printf("Enter the Value of x\n");
	scanf("%d", &x);
	printf("Enter the value of y\n");
	scanf("%d",&y);
	tem =  x;
	x  = y ;
	y = tem;
	
	printf("the value of x is = %d\n", x);
	printf("the value of y is = %d\n", y);
	return 0;
}
