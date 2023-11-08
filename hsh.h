#ifndef HSH_H
#define HSH_H

#define ARGS 128 /* Set number of arguments: 128 */

#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

/* function's prototypes */
void ft_disPrompt(void);
void ft_putchar(int c);
void ft_readInput(char *input, size_t s_buffer, size_t flag);
void ft_exeCommand(char *buffer);
void ft_removeLine(char *buffer, size_t length);

#endif /* HSH_H */
