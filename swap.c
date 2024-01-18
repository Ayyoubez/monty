#include "monty.c"

/**
* _swap - swap two top elements
* @head: stack head
* @counter: line numbers
* Return: nothing
*/

void _swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter)
		fclose(note.file);
		free(note.content);
		frees(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	temp = h->n;
	h->n = head->next->n;
	h->next->n = temp;
}
