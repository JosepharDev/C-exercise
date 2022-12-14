#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	unsigned int s;
	printf("Enter the size of momory\n");
	scanf("%d", &s);
	
	int *memory = (int *)malloc(s); // (int *) = becuese malloc point to void we use this (int *) to tell malloc tho point to int 
	
	for(int i = 0; i < s; i++)
	{
		memory[i] = 1 + rand()% 9;
	}
	
	printf("value of array is\n");
	for(int i = 0; i < s; i++){
		printf("%d, ",memory[i]);
	}

	int y ;
	printf("Enter the number you want to search for\n");
	scanf("%d",&y);

	int o = 0;

	for(int i = 0; i < s; i++)
	{
		if(memory[i] == y){
		o++;
		}
	}
	printf("the number you enter %d  its visible in memory %d times\n", y, o);

	return 0;
}


// linear search algorithem used in this exercise
