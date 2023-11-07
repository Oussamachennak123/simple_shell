#include "hsh.h"

/**
 * main - Entry point for our simple shell program
 * Return: Always 0 (Success).
*/

int main(void)
{
	char str[1024];
	size_t flag = 1;
	
	for (; true; )
	{
		if (isatty(0))
			ft_disPrompt();
		ft_readInput(str, sizeof(str), flag);
		ft_exeCommand(str);
	}
	return (0);
}

