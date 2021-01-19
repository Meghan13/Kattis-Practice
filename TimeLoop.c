#include <stdio.h>
#include <string.h>

int main()
{
	int times = 0;
	scanf("%d", &times);

	int i;
	for(i=0; i<times; i++)
	{
		printf("%d Abracadabra\n", i+1);
	}

	return 0;
}