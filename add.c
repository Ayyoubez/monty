#include "monty.h"

/**
* _add - addiction top 2 elements
* @head: parameter
* @counter: parameter
* Return: nothing
*/

void _add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int count = 0, temp;

	h = *head;
	while (h)
	{
		h = h->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(note.file);
		free(note.content);
		frees(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n + h->next->n;
	h->next->n = temp;
	*head = h->next;
	free(h);
}
