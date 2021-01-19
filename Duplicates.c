#include <stdio.h>
#include<string.h>
int main()
{
	char input[80];
	char space[] = " ";
	scanf("%[^\n]", &input);
	char words[80][80];
	char* word = strtok(input, space);
	int size = 80;

	int i= 0;
	while(word != NULL)
	{
		strncpy(words[i], word, size);
		i++;
		word = strtok(NULL, space);
	}

	int check = 0;
	int j = 0;
	size = i;
	for(i = 0; i<size; i++)
	{
		for(j = 0; j<size; j++)
		{
			check = strncmp(words[j], words[i], 80);
			
			if(i == j)
			{
				continue;
			}
			if(check == 0)
			{
				printf("no");
				return 0;
			}

		}	
	}
	printf("yes");
	return 0;

}