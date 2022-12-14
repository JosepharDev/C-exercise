#include <stdio.h>

int main(){
	int tyear = 2022;
	int age ;
	printf("Enter your birthday\n");
	scanf("%d", &age);
	age = tyear - age;
	printf("Your Age is = %d\n", age);

}
