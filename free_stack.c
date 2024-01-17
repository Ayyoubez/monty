#include "monty.h"
/**
* frees - frees the DLL
* @head: head of the list
*/

void frees(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while(head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
