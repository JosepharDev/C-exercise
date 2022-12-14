#include <stdio.h>
#include <math.h>
int main(){
	float X , Y , P;
	printf("Enter the value of X and Y\n");
	scanf("%f %f", &X, &Y);
	P = pow(X, Y);
	printf("the power is : %.2f\n", P);
	return 0;
}
