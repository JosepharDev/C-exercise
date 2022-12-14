		// Program Fo Find Average Of N Numbers //
		
#include <stdio.h>
int main()
{
	int tn = 0;
	float sum = 0;
	float x;
	printf("How Many Numbers You Want to Enter  ");
	scanf("%d", &tn);
	for(int i = 0; i < tn; i++)
	{
		scanf("%f", &x);
		sum += x;
	}
	printf(" Average Of Entered Numbers id %f", sum/tn );

}
