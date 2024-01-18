#ifndef MONTY_H
#define MONTY_H

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>





/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
*
*
*
*
*/

typedef struct file_s
{
	char *arg;
	FILE *file;
	char *content;
	int line;
} file_t;

extern file_t note;

void check_arguments(int argc);
void frees(stack_t *head);
void add_node(stack_t **head, int n);
void f_stack(stack_t **head, unsigned int counter);
void f_queue(stack_t **head, unsigned int counter);
void add_queue(stack_t **head, int n);
void _push(stack_t **head, unsigned int counter);
void _pall(stack_t **head, unsigned int counter);

















#endif 