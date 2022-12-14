#include <stdio.h>
int main()
{
	char str[100];
	printf("Enter A String\n");
	scanf("%s", str);
	int i = 0;
	int j = 0;
	char temp;
	while(str[i] != '\0')
		i++;
	--i;
	while(j <= i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i--;
		j++;
	}
	printf("%s", str);
}
