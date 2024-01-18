#include "monty.h"

/**
* _pop - pop the top element
* @head: head of the stack
* @counter: line number
* Return: nothing
*/

void _pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", counter);
		fclose(note.file);
		free(note.content);
		frees(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
