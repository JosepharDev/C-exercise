	// Program To Find Fibonacci Number //

#include <stdio.h>
int Fibonacci(int nb)
{
	if(nb == 0)
		return 0;
	if(nb == 1 || nb == 2)
		return 1;
	return nb = Fibonacci(nb - 1) + Fibonacci(nb - 2);
}

int main()
{
	int n;
	printf("Enter A Number\n");
	scanf("%d", &n);
	printf("%d",Fibonacci(n));
}
