#include <stdio.h>

int main(){
	float  length , width;
	float area , perimeter;
	printf("Enter the width of rectangle\n");
	scanf("%f",&width);
	printf("Enter the length of rectangle\n");
	scanf("%f",&length);
	perimeter = (width + length) * 2;
	area = width * length;
	printf("Perimeter of rectangle is %.2f\n", perimeter);
	printf("area of rectangle is %.2f\n", area);
	return 0;
}
