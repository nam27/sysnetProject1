#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prompt()
{
	char *buffer = NULL;
	char *check = "exit";
	
	printf("Please Enter Command: ");

	scanf("%s", buffer);

	if(strcmp(check,buffer)!= 0) return 0;
	else return 1;
}

int main()
{
	prompt();
	
	

	
}
