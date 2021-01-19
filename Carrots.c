#include <stdio.h>
#include <string.h>

int main()
{
	int num;
	int carrots;
	int size = sizeof(num)/sizeof(int);
	scanf("%d %d", &num,&carrots);
	printf("%d", carrots);
}