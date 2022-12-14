/* - A program that converts a time T (integer) expressed in seconds into hours, minutes, seconds.*/

#include <stdio.h>
int main(){
	int T, H, M, S;
	printf("Enter Number To Convert to hours and minutes and seconds\n");
	scanf("%d", &T);

	H = T / 3600;
	M = (T % 3600) / 60;
	S = (T % 3600) % 60;

	printf("%dh %dm %ds\n", H, M, S);
	return 0;
}
