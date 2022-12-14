/*	 program that displays the resistance in series and in parallel of the three resistors R1, R2, R3.	*/
#include <stdio.h>
int main(){
	float R1, R2, R3;
	float Series, Parallel;
	printf("Enter Value of R1\n");
	scanf("%f", &R1);   
	printf("Enter Value of R2\n");         
	scanf("%f", &R2);
	printf("Enter Value of R3\n");         
	scanf("%f", &R3);
	
	Series = R1 + R2 + R3;
	Parallel = (R1 * R2 * R3) / (R1 * R2 + R1 * R3 + R2 * R3);

	printf("Series = %.2f\nParallel = %.2f\n", Series, Parallel);

	return 0; 
}
