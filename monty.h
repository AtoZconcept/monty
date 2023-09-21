#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>


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
 * struct arg_stream - variables holder
 * @stream: conector to the file
 *
 * Description: the fuction hold variable to be used
 * in the program and the memory allocated must be free
 */
typedef struct arg_stream
{
	FILE *stream;
	char *line;
	unsigned int line_num;
	char **tokens;
	int num_tokens;
	instruction_t *instruction;
} arg_tream;

extern arg_tream *arguments;
int main(int argc, char **argv);
void check_arg(int argc);
int dprintf(int fd, const char *format, ...);
void init_args();
void fail_malloc(void);
void streamget_fail(char *file);
void streamget(char *file);
void token_line(void);
void invalid_instruct(void);
void instruct_get(void);
void instruct_run(void);
void token_free(void);
void stream_clos(void);
void free_args();

/*associate fuction prototype*/
void push(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);

#endif /* MONTY_H */
