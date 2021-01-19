#include <stdio.h>
#include <string.h>

int main()
{
	int numLines = 0;
	char input[100];
	char* sub = "Simon says \0";

	scanf("%d\n", &numLines);
	// printf("%s", input);
	int i;
	int j;
	for(i = 0; i<numLines; i++)
	{
		if(i == numLines-1)
		{
			scanf("%[^\n]", &input);
		}
		else
		{
			scanf("%[^\n]\n", &input);
		}
		int check = strncmp(input, sub, 11);
		if(check == 0)
		{
			for(j = 11; j < strlen(input); j++)
			{
				printf("%c", input[j]);

			}
			printf("\n");
		}
		
	}

	return 0;
}