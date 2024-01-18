#include "monty.h"
/**
* _mul - multplu 2 nodes data
* @head: head of the stack
* @counter: line number
* Return: nothing
*/

void _mul(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int count = 0, i;

	temp = *head;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(note.file);
		free(note.content);
		frees(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	i = temp->next->n * temp->n;
	temp->next->n = i;
	*head = temp->next;
	free(temp);
}
