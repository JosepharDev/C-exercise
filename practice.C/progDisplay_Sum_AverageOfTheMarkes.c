#include <stdio.h>
#include <math.h>
int main(){

	float n1, n2, n3, n4, n5, total, average;
	printf("Enter the first note\n");
	scanf("%f", &n1);
	printf("Enter the second note\n");
	scanf("%f",&n2);
	printf("Enter the third note\n");
	scanf("%f",&n3);
	printf("Enter the fourth note\n");
	scanf("%f", &n4);
	printf("Enter the fifth\n");
	scanf("%f", &n5);
	
	total = n1 + n2 + n3 + n4 + n5;

	printf("total of the notes is = %.2f\n", total);

	average = total / 5;
	printf("the average of the notes is = %.2f\n", average);
}
