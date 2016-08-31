#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int i = 0;
	char *buffer;
	char *check = "exit\n";
	size_t bufsize = 100;

	buffer = (char *)malloc(sizeof(char)*bufsize); // Dynamically allocated so buffer may be passed between functions/files


	// Ask for user input until an exit condition is reached
	while(i == 0)
	{
		
		printf("Please Enter Command: ");

		fgets(buffer, bufsize, stdin);

		printf("%s\n", buffer);

		if(strcmp(check,buffer)== 0) // Exit Condition
		{
			i = -1;
		}
		else
		{
			//Call Parse.c functions to handle input
		}
	}

	
	free(buffer); // Free memory allocated for the buffer

	
}
