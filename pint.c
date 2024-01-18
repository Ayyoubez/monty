#include "monty.h"

/**
* _pint - display top of the stack
* @head: head stack
* @counter: line number
* Return: nothing
*/

void _pint(stakc_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(note.file);
		free(note.content);
		frees(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
