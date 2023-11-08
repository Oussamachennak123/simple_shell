#include "hsh.h"

/**
 * ft_readInput - function that reads the user command from stdin
 * @input: pointer to the command entered from user
 * @s_buffer: size of the buffer
 * @flag: flag 0 in case of EOF, otherwise 1
 * Return: void.
*/
void ft_readInput(char *input, size_t s_buffer, size_t flag)
{
	input = fgets(input, s_buffer, stdin);
	if (input == NULL)
		flag = 0;
	switch (flag)
		{
			case 0:	/* Eof ctrl + d */
					exit(0);
			case 1:
					ft_removeLine(input, strlen(input) - 1); /* newline remove */
					if (feof(stdin))
					{
						ft_putchar('\n');
						exit(EXIT_SUCCESS);
					}
		}
}
