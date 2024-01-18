#include "monty.h"
/**
* execute - the opcode file
* @content: line content
* @stack: stack
* @counter: line number
* @file: file stream
* Return: 1 on success
*/

int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t option[] = {
				{"push", _push}, {"pall", _pall}, {"pint", _pint},
				{"pop", _pop},
				{"swap", _swap},
				{"add", _add},
				{"nop", _nop},
				{"div", _div},
				{"sub", _sub},
				{NULL, NULL}};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	note.arg = strtok(NULL, " \n\t");
	while (option[i].opcode && op)
	{
		if (strcmp(op, option[i].opcode) == 0)
		{
			option[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && option[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		frees(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
