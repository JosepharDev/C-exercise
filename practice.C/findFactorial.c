	// Program To Find Factorial Of A Number In C //
	
#include <stdio.h>
int main()
{
	int fact = 1;
	int n;
	printf("Enter A Numbers\n");
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	printf("Factorial Of %d is %d", n , fact);
}
