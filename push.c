#include "monty.h"

/**
* _push - add a node to the stack
* @head: head of the stack
* @counter: line number
* Return: nothing
*/

void _push(stack_t **head, unsigned int counter)
{
	int n;
	int i = 0, flag = 0;

	if (note.arg)
	{
		if (note.arg[0] == '-')
			i++;
		for (; note.arg[i] != '\0'; i++)
		{
			if (note.arg[i] > '9' || note.arg[i] < '0')
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(note.file);
			free(note.content);
			frees(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(note.file);
		free(note.content);
		frees(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(note.arg);
	if (note.line == 0)
		add_node(head, n);
	else
		add_queue(head, n);
}
