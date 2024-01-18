#include "monty.h"
/**
* _sub - substract 2 nodes
* @head: stack head
* @counter: line number
* Return: nothing
*/

void _sub(stack_t **head, unsigned int counter)
{
	stack_t *temp;
	int i, j;

	temp = *head;
	for (i = 0; temp != NULL; i++)
		temp = temp->next;
	if (i < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(note.file);
		free(note.content);
		frees(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	j = temp->next->n - temp->n;
	temp->next->n = j;
	*head = temp->next;
	free(temp);
}
