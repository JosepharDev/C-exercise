#include <stdio.h>
int main(){
	int A, B;
	printf("Enter The Valur Of A\n");
	scanf("%d", &A);
	printf("Enter The Value Of B\n");
	scanf("%d", &B);

	A = A + B;
	B = A - B;
	A = A - B;

	printf("The value of A = %d\nThe value of B = %d\n", A, B);
	return 0;
}
