#include "monty.h"

/**
* _mod - modulo of top 2
* @head: head stack
* @counter: line number
* Return: nothing
*/
void _mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(note.file);
		free(note.content);
		frees(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(note.file);
		free(note.content);
		frees(*head);
		exit(EXIT_FAILURE);
	}
	i = temp->next->n % temp->n;
	temp->next->n = i;
	*head = temp->next;
	free(temp);
}
