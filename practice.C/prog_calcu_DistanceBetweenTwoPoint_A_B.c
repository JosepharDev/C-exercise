#include <stdio.h>
#include <math.h>
int main(){
	float Xa, Xb, Ya, Yb;
	float AB;
	printf("Enter Value the X of A\n");
	scanf("%f",&Xa);
	printf("Enter Value the Y of A\n");
	scanf("%f",&Ya);
	printf("Enter Value the X of B\n");
	scanf("%f",&Xb);
	printf("Enter Value the Y of B\n");
	scanf("%f",&Yb);

	AB = sqrt(pow((Xb - Xa),2) + pow ((Yb - Ya),2));
	
	printf("the distance between A and B is = %.2f\n", AB);
	return 0;
}
