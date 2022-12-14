#include <stdio.h>
#include <math.h>
int main()
{
	float rayon, volume;
	const float PI = 3.14;
	printf("Entre ray of sphere\n");
	scanf("%f", &rayon);
	volume = (4 * PI * pow(rayon, 3)) / 3;
	printf("the valume of sphere is = %.2f\n", volume);
	return 0;

}
