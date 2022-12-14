#include <stdio.h>
#include <math.h>
int main(){
	float x, y, s, mul, df, dv;
	printf("Enter the value of x\n");
	scanf("%f", &x);
	printf("Enter the value of y\n");
	scanf("%f", &y);
	s = x + y;
	mul = x * y;
	df = x - y;
	dv = x / y;
	printf("X + Y = %.2f\n", s);
	printf("X * Y = %.2f\n", mul);
	printf("X - Y = %.2f\n", df);
	printf("X / Y = %.2f\n", dv);
	return 0;
}
