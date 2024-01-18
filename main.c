#include "monty.h"
#include <stdio.h>
file_t note = {NULL, NULL, NULL, 0};

/**
* main - monty interpreter
* @argc: number of arguments
* @argv: file path
* Return: 0 on success
*/

int main(int argc, char **argv)
{
	FILE *file;
	ssize_t read_line = 1;
	size_t size = 0;
	char *content;
	unsigned int counter = 0;
	stack_t *stack = NULL;

	check_arguments(argc);
	file = fopen(argv[1], "r");
	note.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		note.content = content;
		counter++;
		if (read_line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free(stack);
	fclose(file);
return (0);
}
