#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<ctype.h>



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
* struct file_s - arguments line content
* @arg: arguments
* @file: file stream
* @line: flag change
* @content: line content
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
void _add(stack_t **head, unsigned int counter);
void _push(stack_t **head, unsigned int counter);
void _pall(stack_t **head, unsigned int counter);
void _div(stack_t **head, unsigned int counter);
void _pint(stack_t **head, unsigned int counter);
void _pop(stack_t **head, unsigned int counter);
void _sub(stack_t **head, unsigned int counter);
void _nop(stack_t **head, unsigned int counter);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void _swap(stack_t **head, unsigned int counter);
void _mul(stack_t **head, unsigned int counter);














#endif 
