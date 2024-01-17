#include<stdio.h>
#include"monty.h"
/**
* check_arguments - check for the arguments
* @argc: parameter
*
* Return: nothing
*/

void check_arguments(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
}
