#include "hsh.h"

/**
 * ft_exeCommand - function that parses and executes the command given
 * from the user
 * @buffer: pointer to stream file stdin to take the command line.
 * Return: void.
*/
void ft_exeCommand(char *buffer)
{
	char *av[ARGS], *tk; /* max 128 arguments */
	size_t avCount = 0;
	pid_t child_pid = fork(); /* create child process */

	switch (child_pid)
	{
		case -1:
				perror("Error forking process");
				exit(EXIT_FAILURE);
				break;
		case 0: /* child process */
				{
					tk = strtok(buffer, " ");
					if (tk == NULL)
						exit(EXIT_FAILURE);
					for (; tk  && avCount < ARGS; avCount++)
					{
						av[avCount] = tk;
						tk = strtok(NULL, " ");
					}
					av[avCount] = NULL; /* NULL-terminates the av array */
					if (av[0] == NULL)
						exit(EXIT_FAILURE);
					execvp(av[0], av); /**
							    * If execvp fails,
							    * printf  will print an error message.
							    */
					if (execvp(av[0], av) == -1)
					{
						fprintf(stderr, "%s: 1: %s: not found\n", "./hsh", av[0]);
						exit(127);
					}
				}
				break;
		default:
				wait(NULL); /* parent process */
				break;
	}
}
