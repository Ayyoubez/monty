#include "monty.h"

/**
* _pall - print the conetnt of the stack
* @head: head of the stack
* @counter: line numbers
* Return: nothing
*/

void _pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
