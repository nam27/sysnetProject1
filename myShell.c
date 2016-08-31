#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int i = 0;
	char *buffer;
	char *check = "exit\n";
	size_t bufsize = 100;

	buffer = (char *)malloc(sizeof(char)*bufsize);

	while(i == 0)
	{
		
		printf("Please Enter Command: ");

		fgets(buffer, bufsize, stdin);

		printf("%s\n", buffer);

		if(strcmp(check,buffer)== 0)
		{
			i = -1;
		}
		else
		{
			printf("Run...\n");			
		}
	}

	
	free(buffer);

	
}
