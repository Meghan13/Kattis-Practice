#include <stdio.h>
#include <math.h>
int main()
{
	int size;
	int num =0;
	int power = 0;
	int total = 0;

	scanf("%d", &size);
	int i;
	for(i = 0; i< size; i++)
	{
		scanf("%d", &num);
		power = num%10;
		num = num/10;
		total += pow(num, power);
	}
	printf("%d", total);
}